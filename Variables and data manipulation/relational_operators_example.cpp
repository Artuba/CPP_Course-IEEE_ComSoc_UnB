#include <iostream>
#include <locale.h>

 using namespace std;
 
int main()
{
	setlocale (LC_ALL,"Portuguese");
	cout << "Insira um inteiro: ";
    int x;
    cin >> x;
 
    cout << "Insira outro inteiro: ";
    int y;
    cin >> y;
 
    if (x == y)//Fun��o para verificar se X � igual a Y
        cout << x << " � igual a " << y << "\n";
    if (x != y)//Fun��o para verificar se X � diferente de Y
        cout << x << " n�o � igual a " << y << "\n";
    if (x > y)//Fun��o para verificar se X � maior que Y
        cout << x << " � maior que " << y << "\n";
    if (x < y)//Fun��o para verificar se X � menor que Y
        std::cout << x << " � menor que " << y << "\n";
    if (x >= y)//Fun��o para verificar se X � maior ou igual a Y
        cout << x << " � maior ou igual a " << y << "\n";
    if (x <= y)//Fun��o para verificar se X � menor ou igual a Y
        cout << x << " � menor ou igual a " << y << "\n";
 
    return 0;
}
