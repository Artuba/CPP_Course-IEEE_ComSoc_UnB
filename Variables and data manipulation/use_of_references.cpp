#include <iostream>
#include <string>

using namespace std;

int main()
{
	
    /*
		Uma refer�ncia � indicada usando-se o operador '&',
		da mesma forma que um ponteiro � indicado usando-se
		o operador '*'.
		Por exemplo voc� pode declarar a vari�vel 'cebola' como 
		uma refer�ncia para a vari�vel 'batata'.
		O uso principal de uma refer�ncia � na passagem de um 
		argumento para uma fun��o.
	*/
    
    string batata = "batata";
    string& cebola = batata;
    
    cout << cebola;
    //Resulta em "batata"
    return 0;       
}
