#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	char vog;
	
	cout << "Informe uma vogal: ";
	cin >> vog;
	
	switch(vog) {
		case 'a':
			cout << "a � a primeira vogal." << endl;
			break;
		case 'e':
			cout << "e � a segunda vogal." << endl;
			break;
		case 'i':
			cout << "i � a terceira vogal." << endl;
			break;
		case 'o':
			cout << "o � a quarta vogal." << endl;
			break;
		case 'u':
			cout << "u � a quinta vogal." << endl;
			break;
		default:
			cout << "A letra informada n�o corresponde a uma vogal." << endl;	
	}
	
	system("pause");
	return 0;
}

