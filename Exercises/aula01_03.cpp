#include<iostream>
#include<locale>

using namespace std;

int main(){
	// Imprimir sem setlocale
	cout << "C++ � m� legal!" << endl;
	
	setlocale(LC_ALL,"Portuguese");
	
	// Imprimir com setlocale
	cout << "C++ � m� legal!" << endl;
	
	system("pause");
	return 0;
}
