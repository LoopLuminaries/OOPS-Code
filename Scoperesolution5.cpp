/*Refer to a class inside another class: If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution 
operator*/

/*You are developing software for a university, which consists of multiple departments. Each department has a name and a certain
number of professors. You need to create a system that can represent universities and their departments.Your task is to design
classes that handle this hierarchy and provide functionality to access department names and the total number of professors. You
will use the scope resolution operator to set the number of professors for each department.*/

#include <iostream>
using namespace std;

class University {
public:
    string name;
    class Department {
    public:
        string name;
        static int numOfProfessors;
        int getProfessorCount();
    };
};

int University::Department::numOfProfessors = 50;
int University::Department::getProfessorCount() {
    return numOfProfessors;
}

int main() {
    University university;
    university.name = "XYZ University";

    University::Department computerScience;
    computerScience.name = "Computer Science";

    cout << "University Name: " << university.name << endl;
    cout << "Department Name: " << computerScience.name << endl;
    cout << "Number of Professors: " << computerScience.getProfessorCount() << endl;
}

