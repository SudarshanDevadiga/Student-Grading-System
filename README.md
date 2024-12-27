# Student Grading System

A C++ program implementing a simple student grading system that calculates and displays grades based on marks input.

## Description

This program provides functionality to manage student academic information including name, marks, and automatically calculated grades. It features input validation, grade calculation based on marks ranges, and the ability to process multiple students.

### Key Features
- Student information management
- Automatic grade calculation
- Input validation
- Multiple student processing
- User-friendly interface

## Class Structure

### Student Class
```cpp
class Student {
private:
    string name;
    int marks;
    char grade;

public:
    void inputDetails();
    void calculateGrade();
    void displayDetails();
};
