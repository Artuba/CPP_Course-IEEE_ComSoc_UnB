#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Escopo � a parte de um programa onde uma determinada vari�vel
		� acessada. Uma vari�vel tem um escopo associado que, juntamente
		com o nome da vari�vel, identifica a vari�vel de forma �nica.
		
		O escopo de uma vari�vel se estende entre o ponto de declara��o da
		vari�vel e a chave de fechamento mais pr�xima dentro da qual a vari�vel
		� declarada.
		
		 		 
	*/
	
    int v1;
	{
		int v2;
		//v1 e v2 s�o v�lidos aqui
		{
			int v3;
			//v1, v2 e v3 s�o v�lidos aqui 
		}
		//v1 e v2 s�o v�lidos aqui, mas v3 n�o �.
	}
	//somente v1 � v�lido aqui   	
    
    
    
    return 0;       
}