//scope resolution To define a function outside a class.

/*You are developing a software application for an online shopping platform, and you need to implement a function to process
 orders for electronic products. The function should calculate the total cost of an order, apply any available discounts,
 and display the order summary.*/

#include<iostream>
using namespace std;
class shoppingcart{
public:
    void processOrder();
};
void shoppingcart::processOrder(){
  double totalcost=1200;
  cout<<"order summary:\n";
  cout<<"item 1: laptop- rs 800:\n";
  cout<<"item 2: smartphone- rs 400:\n";
  cout<<"total cost: rs "<<totalcost<<endl;
}
int main()
{
    shoppingcart cart;
    cart.processOrder();
    return 0;;
}


