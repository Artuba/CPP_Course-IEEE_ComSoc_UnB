#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double num, res;
	
	cout << "Informe um n�mero :";
	cin >> num;
	
	cout << "A raiz de " << num << " � igual a ";
	if(num >= 0) {
		res = sqrt(num);
		cout << res << endl;
	} 
	else {
		res = sqrt(abs(num));
		cout << res << "i" << endl;
	}
	
	system("pause");
	return 0;
}

