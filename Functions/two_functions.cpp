#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// Prototipos das fun��es
double square_plus_one(double);
void print_result(double,double);

int main(){
	setlocale(LC_ALL,"Portuguese");
	double num,num2;
	
	cout << "Informe um n�mero: ";
	cin >> num;
	
	// Chamada da fun��o square_plus_one
	num2 = square_plus_one(num);
	
	// Chamada da funcao print_result
	print_result(num,num2);
	
	system("pause");
	return 0;
}

// Defini��o (ou implementa��o) da fun��o square_plus_one
double square_plus_one(double x){
	double res;
	res = pow(x,2.0) + 1.0;
	return res;
}

// Defini��o (ou implementa��o) da fun��o print_result
void print_result(double d, double d2){
	cout << d << "^2 + 1 = " << d2 << endl;
}
