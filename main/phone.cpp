//Christos Kokkalis 2020 - phone# business logic

#include<iostream>
#include<string>
#include "phone.h"

using namespace std;

//implementing PhoneNumber class
PhoneNumber::PhoneNumber()
{
	areaCode = "";
	exchange = "";
	line = "";
}

//setter methods
void PhoneNumber::setAreaCode(string s)
{
	areaCode = s;
}
void PhoneNumber::setExchange(string s)
{
	exchange = s;
}
void PhoneNumber::setLine(string s)
{
	line = s;
}

//getter methods
string PhoneNumber::getAreaCode()
{
	return areaCode;
}
string PhoneNumber::getExchange()
{
	return exchange;
}
string PhoneNumber::getLine()
{
	return line;
}

ostream& operator<<(ostream& output, PhoneNumber& D)
{
	output << D.areaCode << "-" << D.exchange << "-" << D.line;
	return output;
}

istream& operator>>(istream& input, PhoneNumber& D)
{
	//Splitting and assigning to individual fields
	getline(input, D.areaCode, '-');
	getline(input, D.exchange, '-');
	getline(input, D.line);

	return input;
}