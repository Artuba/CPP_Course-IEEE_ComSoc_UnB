#include <iostream>
 using namespace std;
 
int main()
{
	cout << "Insira um inteiro: ";
    int x;
    cin >> x;
 
    cout << "Insira outro inteiro: ";
    int y;
    cin >> y;
 
    if (x == y)//Fun��o para verificar se X � igual a Y
        cout << x << " e igual a " << y << "\n";
    if (x != y)//Fun��o para verificar se X � diferente de Y
        cout << x << " nao e igual a " << y << "\n";
    if (x > y)//Fun��o para verificar se X � maior que Y
        cout << x << " e maior que " << y << "\n";
    if (x < y)//Fun��o para verificar se X � menor que Y
        std::cout << x << " e menor que " << y << "\n";
    if (x >= y)//Fun��o para verificar se X � maior ou igual a Y
        cout << x << " e maior ou igual a " << y << "\n";
    if (x <= y)//Fun��o para verificar se X � menor ou igual a Y
        cout << x << " e menor ou igual a " << y << "\n";
 
    return 0;
}
