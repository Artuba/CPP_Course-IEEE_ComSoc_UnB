#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num, res;
	
	cout << "Informe um n�mero : ";
	cin >> num;
	
	res = num % 2;
	
	if(res == 0) {
		cout << "O n�mero � par." << endl;
	} 
	else {
		cout << "O n�mero � �mpar." << endl;
	}
	
	system("pause");
	return 0;
}

