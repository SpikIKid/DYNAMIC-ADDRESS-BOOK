# 📒 Address Book Management System (C Language)

## 📌 Project Overview

The **Address Book Management System** is a console-based application written in **C** that allows users to store, manage, and maintain contact information efficiently.

The program uses a **Doubly Linked List** data structure along with **file handling** to permanently store contacts in a text file.

This project demonstrates concepts of:

* Dynamic Memory Allocation
* Data Structures (Doubly Linked List)
* File Handling in C
* Menu Driven Programming
* CRUD Operations

---

## 🚀 Features

* ✅ Add new contacts
* ✅ Display all saved contacts
* ✅ Edit existing contact details
* ✅ Delete contacts
* ✅ Automatic file saving
* ✅ Load contacts from file at startup
* ✅ Persistent storage using text file

---

## 🧱 Data Structure Used

Each contact is stored using a **Node structure**:

```c
typedef struct Node{
    char name[100];
    char phone[20];
    char gmail[100];
    struct Node* prev;
    struct Node* next;
}Node;
```

The contacts are maintained using a **Doubly Linked List**.

---

## 💾 File Storage

All contacts are stored in:

```
Contacts.txt
```

Format used inside file:

```
Name|Phone|Gmail
```

Example:

```
John Doe|9876543210|john@gmail.com
```

---

## 🖥️ Menu Options

```
1. Display Contacts
2. Add Contact
3. Delete Contact
4. Edit Contact
5. Exit
```

---

## ⚙️ How to Compile and Run

### ▶ Compile

```bash
gcc addressbook.c -o addressbook
```

### ▶ Run

```bash
./addressbook
```

(Windows users)

```bash
addressbook.exe
```

---

## 📂 Project Structure

```
Address-Book/
│
├── addressbook.c
├── Contacts.txt   (created automatically)
└── README.md
```

---

## 🧠 Concepts Covered

* Structures in C
* Pointers
* Dynamic Memory Allocation (`malloc`, `free`)
* Doubly Linked List Traversal
* File Handling (`fopen`, `fprintf`, `fgets`, `sscanf`)
* Menu Driven Programs

---

## 🔧 Future Improvements

* Search contact feature
* Sort contacts alphabetically
* Case-insensitive search
* Duplicate contact prevention
* Binary file storage
* GUI version

---

## 📸 Sample Output

```
----Address Book----
1.Display contacts
2.Add contact
3.Delete contact
4.Edit option
5.Exit
```

---

## 👨‍💻 Author

**Athul Lalu**
Computer Science Student

---

## 📄 License

This project is created for educational purposes and is free to use and modify.
