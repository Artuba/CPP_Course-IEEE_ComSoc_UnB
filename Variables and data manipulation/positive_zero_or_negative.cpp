#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double num;
	
	cout << "Informe um n�mero: ";
	cin >> num;
	
	if(num < 0) {
		cout << "O n�mero informado � negativo." << endl;
	} 
	else if(num == 0){
		cout << "O n�mero informado � zero." << endl;
	}
	else {
		cout << "O n�mero informado � positivo." << endl;
	}
	
	system("pause");
	return 0;
}

