#include "Customer.h"

//constructor
Customer::Customer(string fn, string ln){
	firstName = fn;
	lastName = ln;
}

//setters
void Customer::setFirstName(string fn){
	firstName = fn;
}

void Customer::setLastName(string ln){
	lastName = ln;
}

// return full name of customer
string Customer::getName(){
	return firstName + " " + lastName;
}

//operator overload
ostream& operator<< (ostream& oStream, Customer& customer)
{
	oStream << customer.getName()<< endl;
	return oStream;
}




