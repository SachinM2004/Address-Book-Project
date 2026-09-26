# 📒 Address Book

A command-line **Address Book Application** developed in **C** that efficiently manages contact information using **CRUD (Create, Read, Update, Delete)** operations. The application stores contact details in a file, ensuring data persistence across multiple executions.

---

## 📖 Overview

The Address Book application is a menu-driven contact management system that allows users to add, search, edit, delete, and list contacts. It demonstrates the use of structures, file handling, dynamic memory management, and modular programming in C.

---

## ✨ Features

- ➕ Add new contacts
- 📋 Display all contacts
- 🔍 Search contacts by Name, Phone Number, or Email
- ✏️ Edit existing contacts
- ❌ Delete contacts
- 💾 Save contacts permanently to a file
- 📂 Load contacts automatically when the program starts
- ✅ Input validation for Name, Mobile Number, and Email
- 🚫 Prevent duplicate phone numbers and email addresses

---

## 🛠 Technologies Used

- C Programming
- GCC Compiler
- Linux
- Structures
- File Handling
- Dynamic Memory Allocation
- Standard C Library

---

## 📂 Project Structure

```
.
├── main.c
├── contact.c
├── contact.h
├── file.c
├── file.h
├── populate.c
├── populate.h
├── contacts.csv
├── Makefile
└── README.md
```

---

## ⚙️ Functionalities

### 1. Add Contact

Allows the user to add a new contact with

- Name
- Mobile Number
- Email Address

Validation includes:

- Name should contain only alphabets.
- Mobile number must contain exactly 10 digits.
- Email must follow a valid format.
- Duplicate phone numbers are not allowed.
- Duplicate email addresses are not allowed.

---

### 2. Display Contacts

Displays all saved contacts in a tabular format.

Example:

```
Name           Phone Number      Email
-------------------------------------------------
Sudarshan       9876543210        sudarshan@gmail.com
Sumeet          9123456789        sumeet@gmail.com
```

---

### 3. Search Contact

Search contacts using:

- Name
- Phone Number
- Email

Displays complete contact information if found.

---

### 4. Edit Contact

Modify an existing contact's

- Name
- Phone Number
- Email

Validation is performed before updating.

---

### 5. Delete Contact

Deletes a contact permanently from the address book.

---

### 6. Save Contacts

Stores all contact details into a CSV file.

Example:

```
Sudarshan,9876543210,sudarshan@gmail.com
Sumeet,9123456789,sumeet@gmail.com
```

---

### 7. Load Contacts

Loads all contacts from the CSV file when the application starts.

---

## 🚀 Compilation

Using GCC

```bash
gcc *.c -o addressbook
```

or

```bash
make
```

---

## ▶️ Execution

```bash
./addressbook
```

---

## 📷 Sample Output

```
========== Address Book ==========
1. Add Contact
2. Search Contact
3. Edit Contact
4. Delete Contact
5. Display Contacts
6. Save & Exit

Enter your choice:
```

Example:

```
Enter Name : Sudarshan
Enter Mobile : 9880658041
Enter Email : sudarshan@gmail.com

Contact Added Successfully.
```

---

## 📁 File Format

Contacts are stored in CSV format.


Name,Phone Number,Email
Sudarshan,9880658041,sudarshan@gmail.com
John,9876543210,john@gmail.com


---

## ⏱ Time Complexity

| Operation | Complexity |
|------------|------------|
| Add Contact | O(n) |
| Search Contact | O(n) |
| Edit Contact | O(n) |
| Delete Contact | O(n) |
| Display Contacts | O(n) |
| Save Contacts | O(n) |
| Load Contacts | O(n) |

---

## 📚 Concepts Used

- Structures
- Arrays
- File Handling
- String Manipulation
- Input Validation
- Modular Programming
- Functions
- Dynamic Memory Management

---

## 🎯 Learning Outcomes

This project helped me understand:

- File handling in C
- CSV file processing
- CRUD operations
- Data validation
- Searching techniques
- Modular programming
- Memory management
- User-friendly menu-driven applications

---

## 🔮 Future Enhancements

- Sort contacts alphabetically
- Import/Export contacts
- Favorite contacts
- Multiple phone numbers
- Contact groups
- Password protection
- Backup and restore contacts
- GUI version

---

## 👨‍💻 Author

**Sudarshan Jadhav**

- 📧 Email: jadhavsudarshan470@gmail.com
- 💻 GitHub: https://github.com/sudarshan142023
- 🔗 LinkedIn: https://www.linkedin.com/in/sudarshan-jadhav14/

---

## ⭐ If you found this project useful, don't forget to star the repository!
