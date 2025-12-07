# Lab 6 – Programming Fundamentals

This lab contains tasks designed to practice **conditional statements, nested if, and role-based access logic**.

---

## Tasks

### 1. Check Positive, Negative, or Zero
Write a program that takes an integer input from the user and checks whether it is:  
- Positive  
- Negative  
- Zero  
- **Use `if-elseif-else` statements**.

---

### 2. Temperature-Based Suggestions
Write a program that takes the temperature as input and provides advice:  
- Temperature ≥ 40°C → "Stay indoors; it is extremely hot."  
- 30°C ≤ Temperature ≤ 39°C → "Drink plenty of water to stay hydrated."  
- 20°C ≤ Temperature ≤ 29°C → "The weather is pleasant; suitable for outdoor activities."  
- Temperature < 20°C → "Wear warm clothes to stay comfortable."  
- **Use `if-elseif-else` statements**.

---

### 3. Simple Login System
Simulate a login system that prompts for a username and password. Compare inputs with predefined credentials:  
- **Username:** `admin`  
- **Password:** `12345`  

Feedback scenarios:  
- Both correct → "Access Granted"  
- Username correct, password incorrect → "Wrong Password"  
- Username incorrect → "User Not Found"  
- **Use `if-elseif-else` statements**.

---

### 4. University Exam Results and Scholarship Eligibility
Create a program to analyze students’ results in three subjects. The program should:  

- **Grade Calculation:**
  - Percentage ≥ 90 → Grade A  
  - 80 ≤ Percentage < 90 → Grade B  
  - 70 ≤ Percentage < 80 → Grade C  
  - 60 ≤ Percentage < 70 → Grade D  
  - Percentage < 60 → Grade F  

- **Failure Condition:** Student fails if any subject has Grade F.  

- **Scholarship Eligibility:**
  - Merit Scholarship → Grade A in all subjects and total ≥ 270  
  - Regular Scholarship → At least Grade B in all subjects and total ≥ 240  

- Output: total marks, percentage, grades per subject, and scholarship eligibility.  
- **Use `if-elseif-else` statements**.

---

### 5. Loan Eligibility Checker – Nested `if`
Write a program that checks if a person qualifies for a loan based on age and income:  

- **Age Requirement:** ≥ 18 years.  
  - If under 18 → "You are not eligible for a loan because you are under 18 years of age."  

- **Income Requirement:** ≥ $30,000.  
  - If age requirement met but income < 30,000 → "You meet the age requirement but are not eligible for a loan because your income is below $30,000."  

- **Eligible Applicants:** If both requirements met → "Congratulations! You are eligible for a loan."  
- **Use nested `if` statements**.

---

### 6. Role-Based Access System
Develop an access control system that authenticates a user and checks role permissions:  

- **Authentication:**  
  - Username: `admin`, Password: `password123` → "Authentication Successful!"  
  - Any other combination → "Authentication Failed. Access Denied."  

- **Role-Based Access:**  
  - Role "Admin" → "Full Access"  
  - Role "Guest" → "Limited Access"  
  - Any other role → "No Access"  

- **Use nested `if` statements**.

---

## Lab 6 Objectives

- Practice **if-elseif-else statements** for multiple conditions.  
- Learn **nested if statements** for multi-level decision-making.  
- Implement **basic authentication and role-based access** logic.  
- Analyze student results and determine eligibility for scholarships.  
- Improve **problem-solving and programming logic skills**.  

---
