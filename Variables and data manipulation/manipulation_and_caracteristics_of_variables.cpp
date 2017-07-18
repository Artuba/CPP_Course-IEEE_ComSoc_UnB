#include <iostream>
#include <locale.h>
using namespace std;

/*
//Fun��o para atribui��o m�ltipla
int main(){
	setlocale (LC_ALL,"Portuguese");
	int a(2),b(3),c(5);
	cout<<"a vale: "<< a<<", b vale: "<< b <<" e c vale: "<< c << endl;
	
	return 0;
}*/


//Fun��o para tamanho das vari�veis em mem�ria
int main() {
	setlocale (LC_ALL,"Portuguese");
	bool b = true;
    int i = 100;
    char c = 'r';
    float f = 3.14;
    double d = 3.14159;
    
	cout << "O valor da vari�vel bool b �: " << b << endl;
    cout << "O tamanho na mem�ria da vari�vel b (em bytes) �: " << sizeof(b) << '\n'<< endl;
    cout << "O valor da vari�vel inteira i �: " << i << endl;
    cout << "O tamanho na mem�ria da vari�vel i (em bytes) �: " << sizeof(i) << endl<< endl;
    cout << "O valor da vari�vel char c �: " << c << endl;
    cout << "O tamanho na mem�ria da vari�vel c (em bytes) �: " << sizeof(c) << endl<< endl;
    cout << "O valor da vari�vel float f �: " << f << endl;
    cout << "O tamanho na mem�ria da vari�vel f (em bytes) �: " << sizeof(f) << endl<< endl;
    cout << "O valor da vari�vel double d �: " << d << endl;
    cout << "O tamanho na mem�ria da vari�vel d (em bytes) �: " << sizeof(d) << endl<< endl;

    return 0;
}


//Fun��o para modificadores de tamanho
/*
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
}*/


//Exerc�cio
/*
int main(){
	setlocale (LC_ALL,"Portuguese");
	int x(2);
	cout<<"Digite um n�mero inteiro..."<< endl;
	cin>> x;
	cout<<"O valor do numero � "<< x <<" e o espa�o que ele ocupa na mem�ria � "<< sizeof(x) <<" bytes."<< endl;
	
	return 0;
}*/
