# Dynamic Address Book in C

This is a simple yet powerful command-line address book application built entirely in C. It uses dynamic memory allocation and linked lists to manage contacts, allowing for efficient adding, searching, editing, and deleting of entries without a fixed size limit.

This project was created to practice and demonstrate core C programming concepts, including pointers, data structures, and memory management.

---

## Features

-   **Add Contact**: Add a new contact with name, phone number, and email.
-   **Search Contact**: Find contacts by name.
-   **Edit Contact**: Modify the details of an existing contact.
-   **Delete Contact**: Remove a contact from the address book.
-   **Display All Contacts**: View a list of all saved contacts.
-   **Dynamic Memory**: The address book can grow or shrink as needed, thanks to `malloc()` and `free()`.

---

## How to Compile and Run

This project can be compiled with any standard C compiler, such as GCC.

1.  **Clone the repository:**
    ```
    git clone https://github.com/SpikIKid/DYNAMIC-ADDRESS-BOOK.git
    cd DYNAMIC-ADDRESS-BOOK
    ```

2.  **Compile the source code:**
    ```
    gcc main.c -o address_book
    ```

3.  **Run the application:**
    ```
    ./address_book
    ```

---

## What I Learned

Building this project helped me solidify my understanding of several key computer science concepts:

-   **Data Structures**: Implementing and managing a linked list from scratch.
-   **Memory Management**: Properly allocating and deallocating memory to prevent memory leaks.
-   **Pointers**: Extensive use of pointers for linking nodes and managing data.
-   **Modular Code**: Structuring the program into logical functions for better readability and maintenance.

