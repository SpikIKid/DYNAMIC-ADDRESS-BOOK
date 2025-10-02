# 📒 Dynamic Address Book in C

A simple **Command-line dynamic Address Book Application** implemented in **C** using a **Doubly Linked List**.
This program allows you to **add, display, edit, and delete contacts** efficiently.

---

## 🚀 Features

* ➕ **Add Contact(s)**: Add one or multiple new contacts (name, phone number, email).
* 📋 **Display Contacts**: View the list of saved contacts.
* ✏️ **Edit Contact**: Update name, phone number, or email of an existing contact.
* ❌ **Delete Contact**: Remove a contact by searching with its name.
* 💾 **Dynamic Memory Management** using `malloc` and `free`.
* 🔗 **Doubly Linked List** ensures efficient insertion and deletion operations.

---

## 📂 Project Structure

```
├── Address_Book.c   # Main C source code
├── README.md        # Documentation
```

---

## ⚙️ How It Works

1. **Menu Driven Program**:

   * Display menu options to the user.
   * Perform actions like add, display, edit, or delete contacts.
2. **Data Structure**:

   * Each contact is stored as a **Node** in a doubly linked list.
   * Each node stores:

     * `name` (string)
     * `phone` (string)
     * `gmail` (string)
     * pointers to `prev` and `next` nodes.
3. **Memory Safety**:

   * Allocates memory dynamically when a new contact is added.
   * Frees memory when a contact is deleted or when the program exits.

---

## 🖥️ Usage

### 1️⃣ Compile the Program

```bash
gcc Address_Book.c -o Address_Book
```

### 2️⃣ Run the Program

```bash
./Address_Book
```

### 3️⃣ Menu Options

```
----Address Book----
1. Display contact
2. Add contact
3. Delete contact
4. Edit contact
5. Exit
```

---

## 📌 Example

```
----Address Book----
1. Display contact 
2. Add contact 
3. Delete contact 
4. Edit contact 
5. Exit 
Enter your choice: 2
How many new contacts do you want to add: 1

Enter Name: John Doe
Enter Phone number: 9876543210
Enter Gmail: john@example.com
Contact added successfully!!!!

----Address Book----
1. Display contact 
2. Add contact 
3. Delete contact 
4. Edit contact 
5. Exit 
Enter your choice: 1

---Contact list---
1. Name: John Doe   Phone number: 9876543210   Gmail: john@example.com
```

---

## 🔮 Future Improvements

* ✅ Search contacts by phone or email.
* ✅ Save and load contacts from a file.
* ✅ Sort contacts alphabetically.
* ✅ Add input validation for phone numbers & emails.

---

