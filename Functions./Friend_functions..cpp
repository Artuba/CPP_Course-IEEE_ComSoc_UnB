#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Uma fun��o friend � usada para acessar todos os membros
		da classe � qual a fun��o tenha sido declarada como amiga.
		
		�s vezes, uma fun��o pode precisar acessar duas classes separadas.
		Em C++, uma fun��o pode acessar as duas classses, mesmo que ela n�o seja
		membro de nenhuma das classes. Voc� faz isso ao declarar tal fun��o como
		uma amiga das classes que ela deseja acessar.
		
		Uma fun��o friend pode ser:
			* Uma fun��o que n�o � membro.
			* Uma fun��o de membro de uma classe definida
			  anteriormente.
			* Uma classe inteira.			 		 
	*/
	 
	 class Veiculo;
	 // declare a classe friend existente
	 class Onibus
	 {
	 	private:
	 		friend class Veiculo;
	 }; 
	 class Veiculo
	 {
		 public:
		 	//...
	 };
	 
	 
	 
	     
    return 0;       
}