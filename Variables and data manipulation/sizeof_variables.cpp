#include <iostream>
#include <locale.h> 
using namespace std;

int main() {
    setlocale (LC_ALL,"Portuguese");
    short int si = 100;
    long int li = 100;
    int i = 100;
    long long int lli = 100;
    unsigned ui = 100;
    double d = 3.14159;
    long double ld = 3.14159265359;
    
    cout << "O tamanho na mem�ria da vari�vel short int �: " << sizeof(si) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel int �: " << sizeof(i) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel unsigned int �: " << sizeof(ui) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel long int �: " << sizeof(li) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel long long int �: " << sizeof(lli) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel double �: " << sizeof(d) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na mem�ria da vari�vel long double �: " << sizeof(ld) <<" bytes"<< '\n'<< endl;

    return 0;
}

