
# Hospital Management System in C++

## Project Overview

The Hospital Management System is a menu-driven C++ console
application developed using Object-Oriented Programming (OOP).

It helps manage basic hospital records, including patients,
doctors, staff members, appointments, and bills.

## Features

1. Add and display patient records.
2. Add and display doctor records.
3. Add and display staff records.
4. Book appointments for registered patients and doctors.
5. Display booked appointments.
6. Generate hospital bills.
7. Menu-driven interface.
8. Input validation for record limits and selections.

## OOP Concepts Used

- **Classes and Objects:** Represent patients, doctors,
  staff, appointments, and bills.
- **Inheritance:** Patient, Doctor, and Staff inherit from
  the Person base class.
- **Encapsulation:** Data members are protected or private.
- **Polymorphism:** The virtual display() function is
  overridden in derived classes.
- **Constructors:** Initialize object data.
- **Arrays of Objects:** Store multiple records.
- **Member Functions:** Perform registration, display,
  appointment booking, and billing operations.

## Technologies

- Programming Language: C++
- Standard Library: iostream and string
- Application Type: Console-based
- Compiler: GCC, MinGW, or another compatible C++ compiler

## Project Structure

HospitalManagementSystem/
|
|-- main.cpp
|-- README.md

## How to Run

### Step 1: Install a C++ Compiler

Install GCC/MinGW or use an IDE such as Code::Blocks,
Visual Studio, or VS Code with a configured compiler.

### Step 2: Open the Project Folder

Save the source code as main.cpp.

### Step 3: Compile the Program

Using GCC, open a terminal in the project folder and run:

```bash
g++ -std=c++11 -Wall -Wextra main.cpp -o hospital
```

### Step 4: Run the Program

On Windows:

```bash
hospital.exe
```

On Linux or macOS:

```bash
./hospital
```

## Main Menu

1. Add Patient
2. Show Patients
3. Add Doctor
4. Show Doctors
5. Add Staff
6. Show Staff
7. Book Appointment
8. Show Appointments
9. Generate Bill
0. Exit

## Record Limits

- Patients: 50
- Doctors: 20
- Staff Members: 20
- Appointments: 50

## Important Notes

- Records are stored in memory and are lost when the program
  closes.
- Names and other text inputs are entered as single words.
- Appointment selections use patient and doctor record numbers.
- The billing feature calculates totals from the amounts entered
  by the user.
- This project is for educational purposes and is not intended
  for managing real patient records or medical billing.

## Future Improvements

- Store records in files or a database.
- Support full names with spaces.
- Add patient search and record updates.
- Add appointment cancellation and scheduling conflict checks.
- Link bills to specific patients.
- Add login and role-based access.

## Author

C++ Hospital Management System Project

## License

This project is available for educational and learning purposes.
 