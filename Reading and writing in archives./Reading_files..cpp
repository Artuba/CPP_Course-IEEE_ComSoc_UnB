#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Para conectar um arquivo ao programa para entrada e saida voc� precisa
		incluir o arquivo de cabe�alho fstream em seu programa.
		
		A fun��o open() � usada para abrir um arquivo em modo especificado. Voc�
		pode ent�o concectar o arquivo ao objeto de classe usando a fun��o open()
		Uso:
			open(nome_do_arquivo, modo)
			
		A fun��o close() � usada para desconectar explicitamente um arquivo de um programa.
		 	
	*/
	char letra;
	ifstream leitura;
	leitura.open("batata.txt");
	
	if(!leitura.is_open( )) 
	{
	cout<<"N�o foi poss�vel abrir arquivo! Programa ser� terminado!\n";
	leitura.clear( ); //reseta o objeto leitura, para limpar mem�ria do sistema}
	}
	
	while (leitura.get(letra)) {cout << letra;}
	leitura.close();
	
	return 0;     
}

