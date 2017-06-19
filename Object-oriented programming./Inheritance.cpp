#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>


using namespace std;

class Caixa{
	public:
		int altura,largura;
		void setAltura(int );
		void setLargura(int);
	
};

void Caixa::setAltura(int altura)
{
	this->altura = altura;
}
void Caixa::setLargura(int largura)
{
	this->largura = largura;
}

class CaixaColorida : public Caixa{
	public:
		string cor;
		void setCor(string);
	
};

void CaixaColorida::setCor(string cor)
{
	this->cor = cor;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		A classe derivada herda membros de dados e fun��es de membro de sua class-base.
		A classe derivada pode tamb�m ter seus pr�prios membros de dados e fun��es de 
		membro.
		A heran�a permite a reutiliza��o de c�digo. Quando uma classe � definida, voc�
		pode us-la para criar classes derivadas. A reutiliza��o de classes existentes 
		poupa tempo e trabalho.
		
		Quando voc� deriva uma classe de apenas uma classe-base, a hran�a � conhecida como
		heran�a �nica. Existem dois tipos de heran�a �nica: 
			A p�blica:
				Membros p�blicos e protegidos da classe-base se tornam membros p�blicos e 
				protegidos da classe derivada.
				
			A privada:
				Membros p�blicos e protegidos da classe-base se tornam membros privados da
				 classe derivada.
				 
       Classe base tamb�m � denominada de superclasse
       Classe derivada tamb�m � denominada de  subclasse
				
	*/
	CaixaColorida c1;
	c1.setCor("Vermelha");
	c1.setLargura(10); 	//Herdada
	c1.setAltura(20);  	//Herdada
	
	
	return 0;
}
