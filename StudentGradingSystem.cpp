#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;
    char grade;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        
        cout << "Enter marks (0-100): ";
        cin >> marks;
        
        // Input validation
        while (marks < 0 || marks > 100) {
            cout << "Invalid marks! Please enter marks between 0 and 100: ";
            cin >> marks;
        }
        
        calculateGrade();
    }
    
    // Function to calculate grade
    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        }
        else if (marks >= 75) {
            grade = 'B';
        }
        else if (marks >= 50) {
            grade = 'C';
        }
        else {
            grade = 'F';
        }
    }
    
    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    char choice;
    
    do {
        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        student.inputDetails();
        student.displayDetails();
        
        cout << "\nDo you want to calculate grades for another student? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "\nThank you for using the Student Grading System!" << endl;
    
    return 0;
}