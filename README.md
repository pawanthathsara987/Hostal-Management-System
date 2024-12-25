# 🚀Hostel Management System

🌟This project is a Hostel Management System written in C. It allows you to manage student records, health records, room availability, and more.

## Table of Contents

- [Features](#features)
- [File Structure](#file-structure)
- [Usage](#usage)
- [Functions](#functions)
- [Data Structures](#data-structures)
- [Collaborators](#collaborators)
- [Contributing](#contributing)
- [License](#license)

## 🔰Features

- ✅Add, view, edit, and delete student records
- ✅Manage student health records
- ✅Track room availability
- ✅Record students' check-in and check-out times
- ✅Enter and view rooms with less facilities


## 🔰File Structure

### 📌Description of Key Files

- **func.h**: Header file with function declarations and data structures used across the project.
- **main.c**: The main entry point of the application.
- **main_menu.c**: Contains the main menu logic for the application.
- **add_student.c**: Contains functions to add new student records.
- **view_students.c**: Contains functions to view student records.
- **delete_student.c**: Contains functions to delete student records.
- **edit_student.c**: Contains functions to edit existing student records.
- **search_students.c**: Contains functions to search for student records.
- **students.txt**: Stores student records.
- **available_rooms.txt**: Stores information about available rooms.
- **update_and_show_available_rooms.c**: Contains functions to update and display available rooms.
- **enter_less_facilities.c**: Contains functions to enter rooms with fewer facilities.
- **show_less_facilities.c**: Contains functions to display rooms with fewer facilities.
- **less_facilities.txt**: Stores information about rooms with fewer facilities.
- **health_records.c**: Contains functions to manage health records.
- **add_health_records.c**: Contains functions to add health records for students.
- **view_health_records.c**: Contains functions to view health records.
- **health_records.txt**: Stores health records of students.
- **student_in_out.c**: Contains functions to manage student check-in and check-out.
- **Students_move_out_of_the_hostel.c**: Contains functions to record student departures.
- **out_register.txt**: Stores check-out records of students.
- **Students_arrive_at_the_hostel.c**: Contains functions to record student arrivals.
- **in_register.txt**: Stores check-in records of students.


## 🔰Usage

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/Hostel-Management-System.git
    ```
2. Navigate to the project directory:
    ```sh
    cd Hostel-Management-System
    ```
3. Compile the project:
    ```sh
    gcc *.c -o main_menu
    ```
4. Run the executable:
    ```sh
    ./main_menu
    ```

## 🔰Functions

### 📌Student Management
- **int add_student():** Add a new student record.
- **int view_students()**: View all student records.
- **int delete_student():** Delete a student record.
- **int edit_student():** Edit an existing student record.
- **int search_students():** Search for a student by TG number.

### 📌Health Records
- **int add_health_records():** Add health records for a student.
- **int view_health_records():** View health records of students.
- **int health_records():** Menu for managing health records.

### 📌Room Management
- **int update_and_show_available_rooms():** Update and display available rooms.
- **int enter_less_facilities():** Enter rooms with less facilities.
- **int show_less_facilities():** Show rooms with less facilities.

### 📌Check-in/Check-out
- **int Students_arrive_at_the_hostel():** Record the arrival of students at the hostel.
- **int Students_move_out_of_the_hostel():** Record the departure of students from the hostel.
- **int student_in_out():** Menu for managing student check-in and check-out.

### 📌Main Menu
- **int main_menu():** Display the main menu and handle user input.

## 🔰Data Structures

### Student
```
struct Student {
    char tg_no[20];
    char name[50];
    int room_no;
    int contact_no;
    int parents_cont_no;
    char email[50];
};
```

### Health
```
struct Health {
    char tg_no[20];
    char illness[150];
};
```

### Register
```
struct Register {
    int day, month, year, hour, minute;
    char tg_no[20];
    char name[50];
    int room_no;
    int contact_no;
    int parents_cont_no;
};
```
## 🔰Collaborators

This project was developed by the following team members:

- [Pawan Thathsara](https://github.com/pawanthathsara987)
- [Sandeepa Lakshan](https://github.com/sandeepal513)
- [Supun Sandaruwan](https://github.com/KPGSSandaruwan)
- [Kumudu Sandeepanee](https://github.com/kumudusandeepanee)
- [Anjana Nirmal](https://github.com/Anjana-Nirmal)
- [Janith Isuru](https://github.com/JanithIsu)
- [Vindhya U.S](https://github.com/Vindhya-us)

## 🔰Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.