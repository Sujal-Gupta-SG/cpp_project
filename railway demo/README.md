
# Railway Reservation System

This C++ program implements a simple Railway Reservation System that allows administrators to manage train data and users to book, cancel, and view their train tickets. The system is designed with three user portals (User 1, User 2, User 3) and an Admin portal, each offering specific functionalities.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

### Admin Portal
1. **Add Train Data:**
   - Add multiple train entries with details such as train number, name, departure, time, coach's count, available seats, last station, and fare.
2. **Delete Train Data:**
   - Delete specific train data based on the train number.
3. **Modify Train Data:**
   - Modify various attributes of existing train data.
4. **View Train Data:**
   - View the list of available trains with detailed information.

### User Portals
1. **User 1, User 2, User 3:**
   - Individual user portals with options for booking, cancellation, and viewing current tickets.
2. **Booking:**
   - Users can select a train, check available seats, and book a specified number of seats.
3. **Cancellation:**
   - Users can cancel a specified number of seats for a booked train.
4. **Current Tickets:**
   - Users can view their current bookings.

## Getting Started

### Prerequisites
- Ensure you have a C++ compiler installed on your system.

### Installation
1. Clone the repository:

   ```bash
   git clone https://github.com/Sujal092004/Repositories/tree/63ce190cefe22bf75964d4551e84f3a2da4b820b/c%2B%2B%20program%20/railwaydemo.git
Compile the code:
g++ railway_reservation.cpp -o railway_reservation

Run the executable:
./railway_reservation

Usage
Run the program and choose between the Admin and User options.
Admins can manage train data, and users can book, cancel, and view their train tickets.
Contributing
Contributions are welcome! Feel free to open issues for suggestions or bugs, and submit pull requests to enhance the functionality.
