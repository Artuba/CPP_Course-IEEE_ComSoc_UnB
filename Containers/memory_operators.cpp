#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int k = 42;
	
	cout << "O valor de k �: " << k << endl;
	cout << "O endere�o de k �: " << &k << endl;
	cout << "O valor contido no endere�o de k �: " << *(&k) << endl;
	
	system("Pause");
	return 0;
}

