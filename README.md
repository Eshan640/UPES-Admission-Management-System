############################################################
#                                                          #
#       UPES Admission Management System (C Project)       #
#                                                          #
############################################################

**Course:** C Programming (CSEG1032)  
**Project type:** Major Project  
**Author:** Eshan Adlakha  
**SAP ID:** 590024733  
**Branch:** B.Tech – CSE

---

## Brief description
This is a simple console-based Admission Management System written in C.  
It helps collect student details, check eligibility, run a short 10-question entrance quiz (school-wise), and save passing students into a file `students.txt`.  
I made this project to practice structs, arrays, functions and file handling in a practical, small system.

---

## Features
- Welcome screen + menu-driven interface  
- Input and validation (mobile, marks)  
- School & course selection (Business, Law, Computer Science)  
- 10-question quiz per school (original questions)  
- Pass threshold: 8 / 10  
- Save passed student records to `students.txt` (append)  
- View saved records from menu

---

## Files & folder structure

UPES-Admission-Management-System/
├─ src/
│ └─ main.c # main program
├─ docs/
│ └─ ProjectReport.pdf # project report (SRS, algos, flowchart)
├─ sample/
│ └─ sample_input.txt # sample inputs to test quickly
├─ students.txt # created at runtime (stores passed students)
├─ README.md # this file
└─ LICENSE

---

## How to Run the Project

Step 1: Compile
gcc -std=c11 -Wall src/main.c -o main

Step 2: Run
./main

---

## 📌 Project Output (Screenshots)

Below are a few snapshots showing the working of the system:

- Welcome screen
-  <img width="319" height="121" alt="Screenshot 2025-11-29 at 7 15 00 PM" src="https://github.com/user-attachments/assets/f18c81ce-bee2-4a80-bcf3-0092a342ba80" />
- Admission form input
-   <img width="220" height="178" alt="Screenshot 2025-11-29 at 7 15 44 PM" src="https://github.com/user-attachments/assets/7a37b3bd-a994-4790-bb89-8d1aef077492" />
- Eligibility check
-  <img width="231" height="67" alt="Screenshot 2025-11-29 at 7 16 27 PM" src="https://github.com/user-attachments/assets/aafd5ae2-58bd-4206-b73e-f4b9b4d2b75a" />
- Course selection
-    <img width="399" height="319" alt="Screenshot 2025-11-29 at 7 17 13 PM" src="https://github.com/user-attachments/assets/e4df1e2c-f8a0-4ebe-970d-b7054f20bb56" />
- Final admission letter
-   <img width="427" height="191" alt="Screenshot 2025-11-29 at 7 18 06 PM" src="https://github.com/user-attachments/assets/fbfd257b-4629-4930-86f8-11ea2cf841a8" />
- Saved records display
-  <img width="402" height="266" alt="Screenshot 2025-11-29 at 7 18 32 PM" src="https://github.com/user-attachments/assets/60d05980-e550-44a5-b4ce-38b4e839a585" />

---

## 📘 What I Learned

While making this project, I practiced the following concepts:

- Working with **structures (struct)**  
- Using **arrays of structures**  
- Creating a **menu-driven program**  
- Validating user inputs  
- Implementing **functions** and code modularity  
- File handling (append, read)  
- Conditional logic (eligibility + quiz scoring)  
- Clean formatting & user-friendly output  

This helped me understand how to build a small console-based system from scratch.

---

## 🚀 Future Improvements

Some things I would like to add later:

. Better UI (colors using ANSI codes)
• Online registration portal
• Admin login system
• CSV/Excel export
• GUI-based interface
• Online quiz integration
• OTP verification
• PDF admission letter

---

## 📝 How to Contribute

If you want to improve this project:

1. Fork this repository  
2. Create a new branch  
3. Commit your changes  
4. Create a Pull Request  

Suggestions are always welcome.

---

## 💬 Contact

If you want to discuss this project or ask any doubts:

**Eshan Adlakha**  
📧 *eshanadlakha5@gmail.com*  
B.Tech CSE — UPES

---


