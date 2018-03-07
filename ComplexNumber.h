#pragma once

class ComplexNumber
{
public:
	ComplexNumber(int a, int b);
	ComplexNumber();
	void set_real(int a);
	void set_imaginary(int b);
	ComplexNumber(ComplexNumber, ComplexNumber);
	void get();
private:
	int a, b;



};
