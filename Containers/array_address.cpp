#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int lost[3] = {4, 8, 15};

	cout << "Valor da array �: " << lost << endl;
	cout << "O endere�o do elemento 0 �: " << &lost[0] << endl;
	cout << "O endere�o do elemento 1 �: " << &lost[1] << endl;
	cout << "O endere�o do elemento 2 �: " << &lost[2] << endl;

	system("Pause");
	return 0;
}

