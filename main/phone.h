//Christos Kokkalis 2020 - phone.h header file

#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED

#include<string>
using namespace std;

class PhoneNumber
{
private: //the private fields
	string areaCode;
	string exchange;
	string line;
public:
	//constructor
	PhoneNumber();
	//setter methods
	void setAreaCode(string);
	void setExchange(string);
	void setLine(string);
	//Getter Methods
	string getAreaCode();
	string getExchange();
	string getLine();
	//friend functions & overloading - extraction operator
	friend ostream& operator<<(ostream&, PhoneNumber&);
	//insertion operator
	friend istream& operator>>(istream&, PhoneNumber&);
};

#endif // PHONE_H_INCLUDED