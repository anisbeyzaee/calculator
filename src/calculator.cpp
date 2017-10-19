//============================================================================
// Name        : calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
#include<fstream>
#include "Contact.h"
#include "Operator.h"
using namespace std;


string header="A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):   ";
char choice;	//  user input
string input;
int index=0;
bool trigger=1;   //  a trigger to make sure application runs until user inputs to quit
void print_seperator();

int main() {
	string name;
	string surname;
	string number;
	Contact array [1500];  // creates the array once.
	ifstream file;
	file.open("book2.txt");
		while (!file.eof()){
		    file>> name>> surname>> number;
		     Contact c(name, surname, number);// create the object 1st
			array[index++]=c;//
		}
while (trigger){
	cout<<header<< endl;
	cin>>choice;
	Operator op(array);

	switch(choice){
						case 'A':
						case 'a':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> surname;
							cout << "Enter Number \n"; cin >> number;
							op.AddContact(name,surname,number,index++);
							break;
						case 'S':
						case 's':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> surname;
							op.SearchContact(name, surname);

							break;
						case 'D':
						case 'd':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> surname;
							op.DeleteContact(name, surname);

							break;
						case 'L':
						case 'l':
							op.ListtheContact(index);

							break;

						case 'Q':
						case 'q':
							cout<<"Thanks for using the PhoneList";
							trigger=0;
							break;
						default:
							cout<< "Invalid input";// error
							break;
					}
			print_seperator();
			}
			return -1;
}

void print_seperator(){
	cout << "-------------------------------------- \n";
}




