#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int pontos = 0;
	bool todas = false;
	int palavras = 0;
    enum campos{PALAVRA, DICA, NUMERO_CAMPOS}; 				//Enumera��o de vari�veis constantes
    const int NUMERO_PALAVRAS = 10;							// N�mero de palavras
    const string PALAVRAS[NUMERO_PALAVRAS][NUMERO_CAMPOS] = // Array de duas dimens�es
	{
		{"quine","� um programa que produz seu c�digo fonte como sua sa�da �nica."},
		{"codigo de maquina","S�o representadas por muitas sequ�ncias de bits, normalmente limitadas pelo n�mero de bits do registrador principal da CPU."},
		{"python","� uma linguagem de programa��o de alto n�vel, interpretada, de script, imperativa, orientada a objetos, funcional, de tipagem din�mica e forte."},
		{"inteligencia artificial","A ci�ncia e engenharia de produzir m�quinas inteligentes. � uma �rea de pesquisa da computa��o dedicada a buscar m�todos ou dispositivos computacionais que possuam ou multipliquem a capacidade racional do ser humano de resolver problemas."},
		{"software","Normalmente � composto por diversas fun��es, bibliotecas e m�dulos que gera um programa execut�vel ao final do processo de desenvolvimento."},
		{"protocolo","� uma conven��o que controla e possibilita uma conex�o, comunica��o, transfer�ncia de dados entre dois sistemas computacionais."},
		{"Handshake","� o processo pelo qual duas m�quinas afirmam uma a outra que a reconheceu e est� pronta para iniciar a comunica��o. � utilizado em protocolos de comunica��o, tais como: FTP, TCP, HTTP, SMB,SMTP,POP3 etc."},
		{"roteador","� um dispositivo que encaminha pacotes de dados entre redes de computadores, criando um conjunto de redes de sobreposi��o. � conectado a duas ou mais linhas de dados de redes diferentes."},
		{"camada de aplicacao","� um termo utilizado em redes de computadores para designar a s�tima camada do modelo OSI."},
		{"telnet","� um protocolo de rede utilizado na Internet ou redes locais para proporcionar uma facilidade de comunica��o baseada em texto interativo bidirecional usando uma conex�o de terminal virtual."}	
	};
	palavras = NUMERO_PALAVRAS;
	string jaForam = "";
	while(true)
	{
	//alimenta o gerador de n�meros ale�torios com um n�mero aleat�rio (semente)
	srand(static_cast<unsigned int>(time(0)));
	int escolha = (rand()%NUMERO_PALAVRAS);
	string aPalavra = PALAVRAS[escolha][PALAVRA];  	// Palavra pra adivinhar
	string aDica = PALAVRAS[escolha][DICA];			//	Dica para a palavra
	
	
	if(jaForam.find(aPalavra) != string::npos)
	{
		continue;
	}
	
	jaForam += aPalavra;
	
		
	
		// Embaralhando a palavra
		string embaralhada = aPalavra;
		int tamanho = embaralhada.length();
		for (int i = 0; i < tamanho; ++i )
		{
			int  index1 = (rand() % tamanho);
			int  index2 = (rand() % tamanho);
			char temp   = embaralhada[index1];
			embaralhada[index1] = embaralhada[index2];
			embaralhada[index2] = temp;
		}
		
		//Recebendo o usu�rio
		cout << "\t\t\tBem-vindo ao Embaralhador de Palavras\n\n";
		cout << "Decifre as letras para fazer uma palavra.\n";
		cout << "Entre 'DICA' para ganhar uma dica.\n";
		cout << "\Entre 'FECHAR' para fechar o jogo.\n\n";	
		cout << "O Anagrama �: " << embaralhada;
		
		string palpite;
		int tenta = 0;
		
		cout << "\nSeu palpite: ";
		getline(cin,palpite);
		
	    while ((palpite != aPalavra) &&  tenta < 3)
		{
			
			if(palpite == "DICA")
			{
				cout << aDica;
				
			}
			else if (palpite == "FECHAR")
			{
				todas = true;
				break;
			}
			else
			{
				cout << "\nDesculpe, mas voc� ERROOOOOU!";
				cout << "\nVoc� tem mais " << 3-tenta << " chances.";
				tenta++;
			}
			cout << "\n\nSeu palpite: ";
			getline(cin,palpite);
		
			
			
			
		}
		
		if (palpite == aPalavra)
		{
			palavras -= 1;
			pontos++;
			system("cls");
			cout << "Parab�ns, voc� acertou.\n";
			cout << "\nFaltam " << palavras <<" palavras\n";
			cout << "\nVoc� tem " << pontos <<" de 10 poss�veis.\n\n";
			
			
		}
		else if(palpite != aPalavra && todas == false) 
        {
        	palavras -= 1;
        	system("cls");
			cout << "Desculpe, mas suas chances acabaram.\n";
			cout << "\nFaltam " << palavras <<" palavras\n";
			cout << "\nA palavra era: " << aPalavra <<".\n";
			cout << "\nVoc� tem " << pontos <<" de 10 poss�veis.\n\n";
			
		}
		
		
		if(palavras == 0 || todas != false)
		{
			cout << "\n\nVoc� terminou o jogo com " << pontos << " pontos.";
			if(pontos < 5)
			{
				cout << "\nMuito ruim, voc� n�o acertou nem metade.\n";
			}
			else if(pontos > 5 && pontos != 10)
			{
				cout << "\nNada mal, talvez voc� se forme um dia.\n";
			}
			else if( pontos == 10)
			{
				cout << "\nInacredit�vel, voc� � o MITO DAS REDES DE COMPUTADORES.\n";
			}
			
			cout << "\nDesenvolvedor Bruno V.\n";
			break;
		}
	
	}
    system("pause");
    
    return 0;       
}
