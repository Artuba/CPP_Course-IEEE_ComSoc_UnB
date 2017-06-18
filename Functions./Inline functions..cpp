#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
int somar(int, int);

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Uma fun��o inline � usada para reduzir a sobrecarga das chamadas de fun��es.
		Uma chamada de fun��o envolve uma sobrecarga em termos do tempo levado para se
		executar algumas etapas adicionais necess�rias para sua realiza��o da fun��o. 
		
		Quando voc� declara um fun��o como inline, o corpo da fun��o � expandido no 
		ponto em que � invocada. Ela n�o � compilada como um peda�o separado do c�digo.
		O c�digo da fun��o � inserido sempre que uma chamada dessa fun��o � criada.
				 		 
	*/
	int a,b,c,d,r,s;
	r = somar(a,b);
	s = somar(c,d);
	
	/*
       Todas as vezes que afun��o somar() � invocada, o c�digo da fun��o � incluido no
       progama chamador main().
	   O programa main() � interpretado, do ponto de vista do compilador, como mostra 
	   o c�digo abaixo:
	   
	   void main()
	   {
		   int a,b,c,d,r,s;
		   r = a + b;
		   s = c + d;
		}
	   
	   	
	*/     
    return 0;       
}

inline int somar(int x, int y){
		return x + y;
	}