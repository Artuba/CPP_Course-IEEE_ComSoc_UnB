#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	cout << "Informe um n�mero :";
	cin >> num;
	
	if(num >= 0) {
		cout << "O n�mero � positivo ou zero." << endl;
	} 
	else {
		cout << "O n�mero � negativo." << endl;
	}
	
	system("pause");
	return 0;
}

