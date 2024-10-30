#include <iostream>
using namespace std;

class Applicant {
    public:
    string name;
    double percentile;
    long rollNumber;
    Applicant *next;

    Applicant(double percentile, string name, long rollNumber) {
        this->percentile = percentile;
        this->name = name;
        this->rollNumber = rollNumber;
        next = nullptr;
    }
};

class ApplicationQueue {
    public:
    Applicant *head;
    Applicant *tail;

    ApplicationQueue() {
        head = nullptr;
        tail = nullptr;
    }

    void enqueueApplicant(string name, double percentile, long rollNumber) {
        Applicant* newApplicant = new Applicant(percentile, name, rollNumber);
        if (head == nullptr || head->percentile < percentile) {
            newApplicant->next = head;
            head = newApplicant;
        } else {
            Applicant* current = head;
            while (current->next != nullptr && current->next->percentile >= percentile) {
                current = current->next;
            }
            newApplicant->next = current->next;
            current->next = newApplicant;
        }
        cout << "Applicant added successfully: " << name << endl;
    }

    void removeApplicantByRoll(long rollNumber) {
        if (head == nullptr) {
            cout << "No applicants available for removal." << endl;
            return;
        } else if (head->rollNumber == rollNumber) { 
            Applicant *temp = head;
            head = head->next;
            delete temp;
            cout << "Applicant with roll number " << rollNumber << " has been removed." << endl;
            return;
        } else {
            Applicant *temp = head;
            Applicant *previous = nullptr;
            while (temp != nullptr && temp->rollNumber != rollNumber) {
                previous = temp;
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Roll number not found in records." << endl;
            } else {
                previous->next = temp->next;
                delete temp;
                cout << "Applicant with Roll number: " << rollNumber << " has been successfully removed." << endl;
            }
        }
    }

    void dequeueHighestPriority() {
        if (head == nullptr) {
            cout << "No applicants available for removal." << endl;
            return;
        }
        Applicant* temp = head;
        head = head->next;
        delete temp;
        cout << "Applicant with the highest percentile has been removed." << endl;
    }

    void displayApplicants() {
        if (head == nullptr) {
            cout << "No applicants to display." << endl;
            return;
        }

        Applicant* temp = head;
        cout << "Applicant List (sorted by percentile):" << endl;
        while (temp != nullptr) {
            cout << "Name: " << temp->name << ", Percentile: " << temp->percentile << ", Roll Number: " << temp->rollNumber << endl;
            displayBranch(temp->percentile);
            temp = temp->next;
        }
    }

    void displayBranch(double percentile) { 
        if (percentile >= 97.00 && percentile <= 100.00) {
            cout << "Assigned Branch: Computer Science" << endl;
        } else if (percentile >= 93.00 && percentile < 97.00) {
            cout << "Assigned Branch: Information Technology" << endl;
        } else if (percentile >= 89.00 && percentile < 93.00) {
            cout << "Assigned Branch: Electronics" << endl;
        } else if (percentile >= 85.00 && percentile < 89.00) {
            cout << "Assigned Branch: Mechanical" << endl;
        } else {
            cout << "Not eligible for admission" << endl;
        }
    }
};

int main() {
    ApplicationQueue admissionQueue;
    int choice;

    do {
        cout << "1. Add Applicant" << endl
             << "2. Remove Highest Priority Applicant" << endl
             << "3. Remove an Applicant by Roll Number" << endl
             << "4. Display All Applicants" << endl
             << "5. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        string name;
        double percentile;
        long rollNumber;

        switch (choice) {
            case 1: {
                cout << "Enter Applicant's Name: ";
                cin >> name;
                cout << "Enter Percentile: ";
                cin >> percentile;
                cout << "Enter Roll Number: ";
                cin >> rollNumber;
                admissionQueue.enqueueApplicant(name, percentile, rollNumber);
                break;
            }
            case 2:
                admissionQueue.dequeueHighestPriority();
                break;
            case 3:
                cout << "Enter Roll Number of Applicant to Remove: ";
                cin >> rollNumber;
                admissionQueue.removeApplicantByRoll(rollNumber);
                break;  
            case 4:
                admissionQueue.displayApplicants();
                break;
            case 5:
                cout << "Exiting Program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}