#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, cont;
	
	cout << "Informe um n�mero: ";
	cin >> num;
	cont = num - 1;
	
	while(num % cont != 0){
		cont--;
	}
	
	if(cont == 1){
		cout << "O n�mero � primo!" << endl;
	}
	else {
		cout << "O n�mero n�o � primo!" << endl;
	}
	
	system("pause");
	return 0;
}
