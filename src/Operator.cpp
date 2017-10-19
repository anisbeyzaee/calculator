#include <iostream>
#include <string>
#include "Operator.h"

using namespace std;


//Contact *phoneList;

Operator::Operator(Contact Contact[])
{
	phoneList = Contact;
}

void Operator::AddContact(string name, string surname, string number, int index)
{
	phoneList[index].setName(name);
	phoneList[index].setSurname(surname);
	phoneList[index].setNumber(number);
	phoneList[index].SetAvailable(false);
}

void Operator::DeleteContact(string name, string surname)
{
	int index,i = 0;
		while(i < 1500) // && phoneList[i]==NULL)
		{
			if (phoneList[i].getName() == name && phoneList[i].getSurname() == surname)
			{
			 index=i;
			 phoneList[index].SetAvailable(true);  // I am trying to use flags for future.
			 phoneList[index].setName(NULL);
			 phoneList[index].setSurname(NULL);
			 phoneList[index].setNumber(NULL);
			 cout<< name<< " "<<surname<<"  is removed"<<endl;
			}
			i++;

		}

}
void Operator::ListtheContact(int index)
{
	for(int i=0; i<=index; i++){
		cout<<phoneList[i].getName()<<" "<<phoneList[i].getSurname()<<" "<<phoneList[i].getNumber()<<endl;
	}
}

string Operator::SearchContact(string name, string surname)
{
	int i = 0;
	while(i < 1500) // && phoneList[i]==NULL)
	{
		if (phoneList[i].getName() == name && phoneList[i].getSurname() == surname)
		{
			cout<<phoneList[i].getNumber();
			return phoneList[i].getNumber();
		}

		i++;
	}

	return 0;
}
