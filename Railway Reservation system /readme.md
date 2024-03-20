# Railway Reservation System

## Introduction
This is a railway reservation system implemented in C++. It allows users to reserve tickets, cancel reservations, and perform various other functions related to railway management.

## Features
- **Admin Mode**: Administrators can manage the database, add details, and perform user management tasks.
- **User Mode**: Users can log in, reserve tickets, cancel reservations, and make inquiries.
- **Database Management**: Admins can create and manage user IDs and other database details.
- **Reservation**: Users can reserve tickets specifying train details, boarding points, destination, number of seats, etc.
- **Cancellation**: Users can cancel reservations with appropriate refund calculations.
- **Enquiry**: Users can make inquiries about train details.

## Components
1. **Classes**:
   - `login`: Manages user login details.
   - `Detail`: Represents train details.
   - `reser`: Handles reservation details.
   - `canc`: Manages cancellation details.

2. **Functions**:
   - `main`: Main entry point of the program.
   - `database`: Admin mode functionalities.
   - `user`: User login and functionalities.
   - `reserve`: Ticket reservation functions.
   - `res`: Handles reservation process.
   - `displaypassdetail`: Displays passenger details.
   - `enquiry`: Displays train details.
   - `cancell`: Cancellation process.
   - `can`: Cancellation menu functions.
   - `manage`: User management functions.

3. **Files**:
   - `t.txt`: Stores train details.
   - `p.txt`: Stores reservation details.
   - `cn.txt`: Stores cancellation details.
   - `id.txt`: Stores user login details.

## Usage
1. Run the program.
2. Choose between Admin Mode or User Mode.
3. Perform respective tasks like adding details, reserving tickets, canceling reservations, etc.

## Conclusion
This railway reservation system provides a user-friendly interface for both administrators and users to manage and book railway tickets efficiently.
