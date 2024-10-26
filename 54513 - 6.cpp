#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    string name;
    string sap_id;
    Student* next;

   
    Student(string n, string s_id) {
        name = n;
        sap_id = s_id;
        next = nullptr;
    }
};


class StudentList {
private:
    Student* head;

public:
    
    StudentList() {
        head = nullptr;
    }

    
    void insertStudent(string name, string sap_id) {
        Student* newStudent = new Student(name, sap_id);

        if (head == nullptr) {
            head = newStudent;
        } else {
            Student* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
    }

    
    void deleteStudent(int position) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Student* temp = head;

        
        if (position == 1) {
            head = temp->next; 
            delete temp;
            return;
        }

       
        for (int i = 1; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }

        
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Position " << position << " doesn't exist." << endl;
            return;
        }

        
        Student* next = temp->next->next;
        delete temp->next;  
        temp->next = next;  
    }

    
    void displayStudents() {
        Student* temp = head;
        int count = 1;
        while (temp != nullptr) {
            cout << "Student " << count++ << ": " << temp->name << " (SAP ID: " << temp->sap_id << ")" << endl;
            temp = temp->next;
        }
    }
};

int main() {
    StudentList studentList;
    int numStudents = 5;

    
    for (int i = 0; i < numStudents; i++) {
        string name, sap_id;
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter SAP ID of student " << i + 1 << ": ";
        getline(cin, sap_id);
        studentList.insertStudent(name, sap_id);
    }

    cout << "\nOriginal list of students:\n";
    studentList.displayStudents();

    
    studentList.deleteStudent(2);
    
    studentList.deleteStudent(4);

    cout << "\nList of students after deleting 2nd and 5th student:\n";
    studentList.displayStudents();

    return 0;
}
