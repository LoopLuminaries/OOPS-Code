/*In case of multiple Inheritance: If the same variable name exists in two ancestor classes, we can use scope resolution operator 
to distinguish.*/

/*You are building a software system for managing employee and department details. Each employee and department has a unique
"employeeID" attribute. Your task is to create classes that represent employees and departments and handle this attribute conflict
while allowing access to both attributes.*/

#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
public:
    Employee(int id) : employeeID(id) {}
};

class Department {
protected:
    int employeeID;
public:
    Department(int id) : employeeID(id) {}
};

class EmployeeDepartment : public Employee, public Department {
public:

    EmployeeDepartment(int empID, int deptID) : Employee(empID), Department(deptID) {}

    void displayDetails() {
        cout << "Employee ID: " << Employee::employeeID << "\n";
        cout << "Department ID: " << Department::employeeID << "\n";
    }
};

int main() {
    EmployeeDepartment empDept(101, 201);
    empDept.displayDetails();

    return 0;
}
