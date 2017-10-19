/*
 * Contact.cpp
 *
 *  Created on: Oct 14, 2017
 *      Author: Anis
 */

#include "Contact.h"

int isAvailable;

Contact :: Contact(){
isAvailable = true;
}
Contact :: Contact(string name, string surname, string number){
	newName=name;
	newSurname=surname;
	newNumber=number;

};
Contact::~Contact(){

}


string Contact :: getName() const{
	return newName;
}
string Contact :: getSurname() const{
	return newSurname;
}
string Contact :: getNumber() const {
	return newNumber;

}
void Contact:: setName(string name){
	newName=name;
}
void Contact :: setSurname(string surname){
	newSurname=surname;
}
void Contact :: setNumber(string number){
	newNumber=number;
}
void Contact::SetAvailable(bool availability)
{
	isAvailable = availability;
}
