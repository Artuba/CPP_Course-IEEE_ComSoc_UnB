#include <iostream>
#include <string>
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	try{
		 string nome = "son";
		 string sobrenome = "goku";
		 string nome_completo;
		
/*1*/    nome.at(20) = 'B'; 				//Aciona a exce��o out_of_range 
/*2*/	 nome[30] = 'B'; 					//Aciona a exce��o undefined behaviour
	     nome_completo = nome + " " + sobrenome; 
	     
	     cout << nome_completo << endl; 
	}
	catch (const bad_alloc& e){
//Erro de �ndice
		 cerr << "O �ndice acessado n�o existe." << endl;
		 exit(EXIT_FAILURE);
	}
	catch (const exception& e){
		 cerr << "Exce��o padr�o: "<< e.what() << endl;
		  exit(EXIT_FAILURE);
	}
	catch (...){
		 cerr << "Qualquer outra exce��o." << endl;
		 exit(EXIT_FAILURE);
	}
    
    return 0;       
}







