#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		O C++ oferece uma biblioteca especial de classes - chamada
		biblioteca de fluxos - para tratar das opera��es de entrada
		e saida em programas C++.
		Quando voc� inclui o arquivo de cabe�alho '<iostream>' em 
		um programa, o C++ cria, automaticamente, quatro objetos 
		para tratar das opera��es de entrada e saida.
		
		Tais objetos s�o:
		
		cin 	-> Corresponde ao fluxo de entrada padr�o, que aceita entradas 
				   v�lidas de um teclado;
		cout 	-> Corresponde ao fluxo padr�o de saida, que direciona a saida para 
				   a tela. 
		cerr	-> Corresponde ao fluxo de erro padr�o. Voc� usa o objeto 'cerr' 
                   para alertar o usu�rio de alguma condi��o de exce��o que ocorre 
				   no programa.
		clog	-> Corresponde ao fluxo padr�o de erro que direciona a saida para a tela.
				   � basicamente um clone raramente usado de cerr, destinado a ser usado 
				   para registro.
	*/
	
    int Poder_do_Goku = 0;
    cout << "Por favor, diga logo qual � o poder de luta do kakaroto: ";
    cin  >> Poder_do_Goku;
    
    if (Poder_do_Goku < 8000)
	{
		   cerr << "O poder do Goku deve ser de mais de 8000!" << endl;	
	}
	else
	{
		   clog << "Isso deve ser um engano, esse aparelho deve estar quebrado!" << endl;	
	}
    
    
    return 0;       
}