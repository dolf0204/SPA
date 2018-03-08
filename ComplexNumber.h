#pragma once
#include<sstream>
#include<string>



class ComplexNumber
{
public:
	ComplexNumber(int a, int b);
	ComplexNumber();
	void set_real(int a);
	void set_imaginary(int b);
	ComplexNumber(ComplexNumber, ComplexNumber);
	std::string get();
private:
	int a, b;



};
