#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	bool cond;
	
	cout << "Informe um n�mero : ";
	cin >> num;

	cond = num > 0 && num <=10;
	
	if(cond) {
		cout << "O n�mero � maior que 0 e menor ou igual a 10." << endl;
	} else {
		cout << "O numero nao � maior que 0 e menor ou igual a 10." << endl;
	}
	
	system("pause");
	return 0;
}

