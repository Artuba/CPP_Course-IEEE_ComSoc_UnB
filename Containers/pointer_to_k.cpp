#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int k = 42;
	int* ptr = NULL;
	
	ptr = &k;
	
	cout << "O valor de k �: " << k << endl;
	cout << "O endereco de k �: " << &k << endl;
	cout << "O endereco armazenado no ponteiro ptr �: " << ptr << endl;
	cout << "O valor contido no endereco de k �: " << *(&k) << endl;
	cout << "O valor contido no endereco armazenado no ponteiro ptr �: " << *ptr << endl;
	
	system("Pause");
	return 0;
}

