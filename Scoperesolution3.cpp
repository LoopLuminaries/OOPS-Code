// To access a class’s static variables

/*You are tasked with developing software for a retail store. The store needs a system to handle customer registrations, generate
unique customer IDs, award loyalty points to new customers, and keep track of the total loyalty points earned by all customers.
You need to design a Customer class with methods to achieve these tasks, while handling cases where local variables have the same
name as static class members and using the scope resolution operator :: to access static members when needed.*/

#include<iostream>
using namespace std;

class Customer {
    static int customerIdCounter;
public:
    static int loyaltyPoints;
    void registerCustomer(string name, int customerId) {
        customerId = ++customerIdCounter;
        loyaltyPoints += 100;
        cout << "Customer: " << name << " (ID: " << customerId << ") registered successfully." << endl;
    }
    static void displayLoyaltyPoints() {
        cout << "Total Loyalty Points for all customers: " << loyaltyPoints << endl;
    }
};


int Customer::customerIdCounter = 0;
int Customer::loyaltyPoints = 0;

int main() {
    Customer customer1;
    Customer customer2;


    customer1.registerCustomer("Alice", 0);
    customer2.registerCustomer("Bob", 0);


    Customer::displayLoyaltyPoints();

    return 0;
}
