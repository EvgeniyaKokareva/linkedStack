
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
#include <string>
using namespace std;

class Customer{

	//private fields
	string firstName;
	string lastName;

	public:
		//methods
		Customer(){};
		Customer(string, string);
		void setFirstName(string);
		void setLastName(string);
		string getName();
};

#endif /* CUSTOMER_H_ */
