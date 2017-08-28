#include <iostream>
#include <string> 
#include <locale>

using namespace std;

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
	
	//Bloco de instru��o para verificar a ocorr�ncia da palavra 'br' na string
	size_t found = str.find(to_find); //retorna o �ndice onde o primeiro 'oi' foi encontrado
	while(found != string::npos){
		found = str.find(to_find,found +1); //tenta encontrar outro 'br', come�ando da posi��o do primeiro 'oi' +1
		count_founds++;	
	}
	
	cout<<"A palavra "<<to_find <<" apareceu "<<count_founds<<" vezes.\n";
	
	system("pause");
	return 0;	
}
