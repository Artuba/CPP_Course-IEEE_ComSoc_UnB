#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Os membros de dados e as fun��es de membros listados na se��o 'public'
		de uma classe podem ser acessados por todas as classes do programa.
		Os atributos podem ser acessados por todas as classes do programa.
		
		Os membros de dados e as fun��es de membros listados na se��o 'private'
		de uma classe podem ser acessados apenas pela pr�pria classe. Os atributos n�o podem
		ser acessados fora da classe.
		
		Os membros de dados e as fun��es de membros listados na se��o 'protected'
		de uma classe podem ser acessados apenas pela classe e por suas classes derivadas.
		Os atributos podem ser acessados fora da classe apenas por suas classes derivadas.		 
	*/
	
    //Exemplo do uso do modificador de acesso public
    class ChavePublica
	{
		   public:
		   	string chavePublica; 
		   //...	  	
	};
	//Exemplo do uso do modificador de acesso private
    class ChavePrivada
	{
		   private:
		   	string chavePrivada; 
		   //...	  	
	};
	//Exemplo do uso do modificador de acesso protected
    class ChaveMaisOuMenosPrivada
	{
		   protected:
		   	string chaveMaisOuMenosPrivada; 
		   //...	  	
	};
	
    
    
    
    return 0;       
}