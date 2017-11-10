#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"
using namespace std;

class BarberShop{
	LinkedStack<Customer> s1;
	LinkedStack<Customer> s2;
	public:
		void addCustomer(Customer&);
		Customer nextCustomer();
};

//add new customer
void BarberShop::addCustomer(Customer& customer){
	s1.push(customer);
}

//return the name of next served customer
Customer BarberShop::nextCustomer(){

	while(s1.isEmpty() != true){
		Customer cust = s1.pop();
		s2.push(cust);
	}
	Customer firstInLine = s2.pop();
	while(s2.isEmpty() != true){
		Customer cust = s2.pop();
		s1.push(cust);
	}
	return firstInLine;
}



int main() {

	//sample run program
	BarberShop shop;
	Customer customer1("MARK","KILGORE");
	Customer customer2("RICK","GRIMM");

	shop.addCustomer(customer1);
	shop.addCustomer(customer2);
	Customer nextCustomer = shop.nextCustomer();

	cout<<nextCustomer.getName()<<" is served next"<<endl;
	Customer customer3("JILL","WOLFF");
	shop.addCustomer(customer3);
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;



	return 0;
}

