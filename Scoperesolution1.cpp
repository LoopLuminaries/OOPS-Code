//1.To access a global variable when there is a local variable with same name

/*Problem Statement: Suppose you are developing a software application for a car rental company, and you need to keep track of
the number of cars available for rent at both a global level (for the entire company) and at a local level (for a specific branch
office). You want to access the global variable representing the total number of available cars when there is a local variable
with the same name representing the number of cars available at a specific branch office.*/
#include <iostream>
using namespace std;
int totalAvailableCars = 100;
void calculateAvailableCars(int totalAvailableCars) {
    int companyCars = ::totalAvailableCars;
    cout << "Total available cars for the company: " << companyCars << endl;
    cout << "Available cars at this branch office: " << totalAvailableCars << endl;
}

int main() {
    int totalAvailableCars = 20;
    calculateAvailableCars(totalAvailableCars);
    return 0;
}

