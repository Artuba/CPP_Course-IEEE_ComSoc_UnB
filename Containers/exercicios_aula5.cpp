#include <iostream>
#include <string> 
#include <locale>

using namespace std;

/*
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	//pede uma string para o usu�rio e imprime caractere por caractere da string
	string str = "";
	cout<<"Insira uma palavra: "<<endl;
	cin>>str;
	cout<<"A string caractere por caractere �: \n";
	for ( string::iterator it=str.begin(); it!=str.end(); ++it)
    	cout << *it<<'\n';
	system("pause");
	return 0;	
}*/

/*
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
}*/


int main ()
{
	setlocale (LC_ALL, "Portuguese");
	//verifica quantas veze a palavra oi apareceu na frase digitada pelo usu�rio
	string str = "";
	string to_find ="br";
	int count_founds(0);
	cout<<"Insira uma frase para verificar a ocorr�ncia da palavra: "<<to_find<<endl;
	//Fun��o getline para pegar toda a stream digitada (mesmo que tenha caracteres de t�rmino , como o espa�o em branco)
	getline(cin,str); 
	
	//Bloco de instru��o para verificar a ocorr�ncia da palavra 'oi' na string
	size_t found = str.find(to_find); //retorna o �ndice onde o primeiro 'oi' foi encontrado
	while(found != string::npos){
		found = str.find(to_find,found +1); //tenta encontrar outro 'oi', come�ando da posi��o do primeiro 'oi' +1
		count_founds++;	
	}
	
	cout<<"A palavra "<<to_find <<" apareceu "<<count_founds<<" vezes.\n";
	
	system("pause");
	return 0;	
}
