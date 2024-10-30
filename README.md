# PriorityQueueAdmissionportalsystem
A priority-based admission system that manages applicants using a queue, sorted by percentile. It supports adding, removing, and displaying applicants, along with automatic branch allocation based on performance.
Here’s the **README.md** description without any bold formatting for the titles:

--- 
A simple admission management system that organizes applicants based on their percentile and assigns branches accordingly.

# Features
- Add new applicants with their name, percentile, and roll number.
- Remove the applicant with the highest percentile.
- Remove an applicant using their roll number.
- Display all applicants sorted by percentile with their assigned branches.

# Branch Allocation Criteria
- 97 - 100%: Computer Science  
- 93 - 97%: Information Technology  
- 89 - 93%: Electronics  
- 85 - 89%: Mechanical  
- Below 85%: Not eligible for admission  

# Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/username/ApplicantManager.git
   cd ApplicantManager
   ```

2. Compile the code:
   ```bash
   g++ main.cpp -o applicationQueue
   ```

3. Run the application:
   ```bash
   ./applicationQueue
   ```

# Technologies Used
- C++

# Contributing
You can help by making suggestions or improvements!

---

Let me know if you need any further adjustments!
