#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
    bool a(1),b(1),c(0); // a = 1, b = 1, c = 0
    bool result = a || b && c ; //falso se n�o tivesse preced�ncia
	cout<<"com a preced�ncia do AND o resultado �: "<< result<<'\n';
	result =  result = (a || b) && c ;
	cout<<"se n�o tivesse a preced�ncia do AND o resultado seria: "<< result<<'\n';
    return 0;
}
