#ifndef OPERATOR_H_
#define OPERATOR_H_

#include <iostream>
#include <string>
#include "Contact.h"

using namespace std;

class Operator{
public:
	//Operator();
	Operator(Contact[]);
	void ListtheContact(int index);
	void DeleteContact(string name,string surname);
	void AddContact(string name, string surname, string number, int index);
	string SearchContact(string name, string surname);
private:
	Contact *phoneList;
};


#endif /* OPERATOR_H_ */
