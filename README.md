# Priority Queue Admission Portal System

This C++ project implements a Priority Queue Admission System for managing applicants based on their academic percentile scores. The system allows applicants to be added, viewed, and prioritized for admissions based on their percentile scores, with the highest-scoring applicants receiving top priority. This project demonstrates the use of a linked list structure to handle dynamic data and showcases basic data handling with priority-based sorting.

# Features

- Priority-Based Enqueue: Applicants are added to the list based on their percentile score, with higher scores given higher priority.
- Applicant Removal: 
  - Highest Priority Dequeue: Removes the applicant with the highest percentile (top priority).
  - Remove by Roll Number: Removes a specific applicant based on their unique roll number.
- Applicant Display: Lists all applicants sorted by percentile, showing each applicant's assigned branch based on their score:
  - Computer Science (97 - 100 percentile)
  - Information Technology (93 - 96.99 percentile)
  - Electronics (89 - 92.99 percentile)
  - Mechanical (85 - 88.99 percentile)
  - Not eligible if below 85 percentile

# Code Overview

# 1. Applicant Class
Defines each applicant's attributes:
- name: The applicant's name.
- percentile: Academic score as a percentile (double).
- rollNumber: A unique roll number.
- next: Pointer to the next applicant in the list.

# 2. ApplicationQueue Class
This class manages the queue of applicants and provides methods for:
- Enqueue: Adds applicants based on their percentile score.
- Dequeue and Remove: Removes applicants either by highest priority or specific roll number.
- Display: Shows all applicants along with their assigned branch based on percentile.

# 3. Main Function
The program offers a menu-driven interface that lets users add, remove, and display applicants. Key options include:
- Add Applicant: Enter name, percentile, and roll number.
- Remove Highest Priority Applicant: Removes the applicant with the highest percentile.
- Remove Applicant by Roll Number: Removes an applicant based on their roll number.
- Display All Applicants: Displays the sorted list with assigned branches.

# Getting Started

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler.
3. Run the executable to start the application.

# Conclusion

The Priority Queue Admission Portal System serves as an effective tool for managing applicant data in an educational context. It highlights the importance of prioritizing applicants based on academic performance while providing a user-friendly interface for interaction.

---
