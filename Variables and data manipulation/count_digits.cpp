#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	unsigned int dig = 1;
	
	cout << "Informe um n�mero: ";
	cin >> num;
	
	while(num > 9){
		num = num/10;
		dig++;
	}
	
	cout << "O n�mero tem " << dig << " d�gitos." << endl;
	
	system("pause");
	return 0;
}

