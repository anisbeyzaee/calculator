/*
 * Contact.h
 *
 *  Created on: Oct 14, 2017
 *      Author: Anis
 */
#include <iostream>
#include <string>
using namespace std;



#ifndef CONTACT_H_
#define CONTACT_H_


 class Contact{
 public:
	Contact();	//Default constructor
	Contact(string, string, string);	// Overload constructor


~Contact();	// Destructor

string getName() const; // Accessors for member variable
string getSurname() const;
string getNumber() const;
void setName(string);	// Mutator Functions
void setSurname(string);
void setNumber(string);
bool IsAvailable();
void SetAvailable(bool availability);


 private:	// member variables
		string newName;
		string newSurname;
		string newNumber;
};


#endif /* CONTACT_H_ */
