#include <iostream>
#include <string>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	//pede uma string para o usu�rio e imprime ela invertida
	string str = "";
	cout<<"Insira uma palavra: \n";
	cin>>str;
	cout<<"A string invertida �: \n";
	//Bloco de instru��o para imprimir os caracteres da string em ordem inversa
	for ( string::reverse_iterator rit=str.rbegin(); rit != str.rend(); ++rit){
    	cout << *rit;
	}
	cout<<endl;
	
	system("pause");
	return 0;	
}
