# Lost-and-Found-Registry

Lost and Found Registry (C Language)

This project is a console-based Lost and Found Registry system developed using the C programming language. It allows users to manage lost and found items through basic file handling operations.
The system includes a simple login mechanism and provides functionalities to add, view, and search for items. All data is stored in a text file, making the application lightweight and easy to maintain.

Features
1. User Authentication
A basic login system restricts access to authorized users.
2. Add Item
Users can enter details such as item name and location where it was found.
3. View Items
Displays all stored records from the file.
4. Search Item
Allows searching for items using keywords.
5. File Handling
Stores and retrieves data using a text file (items.txt).

Technologies Used

* C Programming Language
* File Handling (fopen, fprintf, fgets, etc.)
* Modular Programming using header files

Project Structure

main.c – Handles menu and program flow

auth.h – Login functionality

items.h – Item operations (add, view, search)

helpers.h – File-related constants

items.txt – Data storage file
