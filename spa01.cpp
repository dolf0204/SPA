#include"ComplexNumber.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	ComplexNumber k1(17, 2);
	ComplexNumber k2;
	k2.set_real(9);
	k2.set_imaginary(-2);
	ComplexNumber rez(k1, k2);
	cout << rez.get() << endl;

	system("pause");
	return 0;
}
