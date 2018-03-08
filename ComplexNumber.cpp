#include"ComplexNumber.h"
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

ComplexNumber::ComplexNumber(int a, int b)
{
	this->a = a;
	this->b = b;
}

ComplexNumber::ComplexNumber(){}

void ComplexNumber::set_real(int a)
{
	this->a = a;
}

void ComplexNumber::set_imaginary(int b)
{
	this->b = b;
}

ComplexNumber::ComplexNumber(ComplexNumber jedan, ComplexNumber dva)
{
	this->a = jedan.a + dva.a;
	this->b = jedan.b+ dva.b;
}

string ComplexNumber::get()
{
	stringstream sstr;

	sstr << a << "+" << b << "i";

	return sstr.str();
}
