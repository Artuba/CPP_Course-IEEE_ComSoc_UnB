#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
    const int ERROS_MAXIMOS = 10; // M�ximo n�mero de vezes que o jogador pode errar.
    
    vector<string> palavras;
    palavras.push_back("TELNET");
    palavras.push_back("TCP");
    palavras.push_back("DHCP");
    palavras.push_back("COAXIAL");
    palavras.push_back("FIBRA");
    palavras.push_back("HTTP");
    palavras.push_back("DNS");
    palavras.push_back("PROPAGACAO");
    palavras.push_back("SINAL");
    palavras.push_back("SHANNON");
    palavras.push_back("NYQUIST");
    palavras.push_back("AMOSTRAGEM");
    palavras.push_back("CANAL");
    palavras.push_back("FREQUENCIA");
    palavras.push_back("POTENCIA");
    
	random_shuffle(palavras.begin(),palavras.end());
    vector<string>::iterator it = palavras.begin();
    int pontos = 0;
    while(it != palavras.end())
	{
	    
	    const string aPalavra = *it;
	    int erros = 0;
	    string ateAgora(aPalavra.size(),'-');
	    string usado = "";
	    
	    cout << "\nBem-vindo a forca!!!\n";
	    
	    
	    while((erros < ERROS_MAXIMOS) && (ateAgora != aPalavra))
		{
			cout << "\n\nVoc� tem: " << (ERROS_MAXIMOS - erros);
			cout << " tentativas faltando\n";
			cout << "\nVoc� j� usou as seguintes letras:\n" << usado << endl;
			cout << "\nAt� agora, a palavra �:\n" << ateAgora << endl;
			
			char palpite;
			cout << "\n\nEntre sua letra: ";
			cin >> palpite;
			palpite = toupper(palpite);
			while(usado.find(palpite) != string::npos)
			{
				cout << "\nVoc� j� advinhou as letras: " << palpite << endl;
				cout << "Entre sua letra: ";
				cin >> palpite;
				palpite = toupper(palpite);
			}
			
			usado += palpite;
			system("cls");
			if(aPalavra.find(palpite)!= string::npos)
			{
				cout << "Correto! " << palpite << " est� na palavra.\n";
				
				for (unsigned int i = 0; i < aPalavra.length(); i++)
				{
					if(aPalavra[i] == palpite)
					{
						ateAgora[i] = palpite;
					}
				}
			}
			else
			{
				cout << "Desculpe. " << palpite << " n�o est� na palavra.\n";
				++erros;
			}
			
		}
		system("cls");
		
	    if(erros == ERROS_MAXIMOS)
		{
			cout << "\n\t\tVoc� foi enforcado!!" << endl;
		
		}
		else
		{
			cout << "\n\t\tVoc� advinhou corretamente!!" << endl;
			pontos++;
		}
		
	    cout << "\n\t\tA palavra era " << aPalavra << endl;
	    cout << "\t\tSeus pontos s�o: " << pontos << endl << endl;
	    
	    it++;
	}
	system("cls");
	cout << "\n\t\tFIM DE JOGO\n\n";
	if (pontos < 8 )
	{
		cout << "Muito ruim, voc� n�o acertou nem metade!!" << endl;
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	
	else if (pontos > 8 && pontos < 15 )
	{
		cout << "�eeeeeeeeeeee Mais ou menos, mais ou menossss!!" << endl;
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	else
	{
		cout << "Parab�ns, You are the legend alive!!!";
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	cout << "\n\n\nDes: Bruno V." << endl;
	system("pause");
	
	return 0;       
}