#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	double num, res;
	
	cout << "Informe um n�mero: ";
	cin >> num;
	
	res = sqrt(num);
	
	cout << "Raiz de " << num << " � " << res;

    return 0;
}
