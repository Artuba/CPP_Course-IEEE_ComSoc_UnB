#include <iostream>

using namespace std;

int main ()
{
	cout << "Esse programa conta de 0 a 10." << endl; 
	
//Implementando o for usando o while
	int i = 0;	//Declara o contador
	while(i <= 10)	//condi��o para execu��o do bloco de instru��es
	{	
		cout<<i<<endl;	//Bloco de instru��o equivalente
						//ao do for
		
		i++;	//incremento do contador
	}
	
	system ("Pause");
	return 0;
}

