#include <iostream>
#include <complex>
#include <utility>
#include <string>
#include <locale.h>
#include "second_solve.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	FuncSecond f1;
	double x1;
	pair< complex<double>,complex<double> > rts;
	string sig;
	
	cout << "f(x) = ax^2 + bx + c" << endl;
	
	cout << "Informe o par�metro a: ";
	cin >> f1.a;

	
	cout << "Informe o par�metro b: ";
	cin >> f1.b;
	
	cout << "Informe o par�metro c: ";
	cin >> f1.c;
	
	rts = f1.roots();
	
	cout << "As ra�zes s�o: ";
	
	sig = rts.first.imag() >= 0 ? " + ":" - ";
	cout << rts.first.real() << sig << abs(rts.first.imag())<< "i e ";
	
	sig = rts.second.imag() >= 0 ? " + ":" - ";
	cout << rts.second.real() << sig << abs(rts.second.imag()) << "i." << endl;
	
	system("pause");
	return 0;
}


