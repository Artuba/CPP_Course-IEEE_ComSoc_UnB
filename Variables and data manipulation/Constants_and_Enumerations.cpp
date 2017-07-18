#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	// Para definir uma constante usa-se a palavra-chave const antes do tipo da vari�vel
	// Lembre-se que: constantes s�o imut�veis
	// Geralmente (n�o � obrigat�rio) se denomina uma constante com LETRAS_MAI�SCULAS separando o segundo nome com '_'
	const int PONTOS_ALIEN = 150;
	int aliensMortos = 10;
	int pontuacao = aliensMortos * PONTOS_ALIEN;
	
	cout << "PONTUA��O: " << pontuacao << endl;
	
	// Se vc tentar dar um novo valor a uma constante 'ex: PONTOS_ALIEN = 200;'
	// Ir� ocorrer um erro de compila��o
	// ERROR: Atribui��o da vari�vel de somente leitura 'PONTOS_ALIEN' 
	
	
	// Uma enumera��o � um conjunto de constantes inteiras sem sinal, chamadas de 
	// enumeradores.
	// Por padr�o, o valor de um enumerador come�a em 0 e � incrementado de 1.
	
	enum dificuldade{NOVATO, FACIL, NORMAL, DIFICIL, IMPOSSIVEL};
	// Nesse caso NOVATO == 0, FACIL == 1, NORMAL == 2. DIFICIL == 3, IMPOSSIVEL == 4
	
	dificuldade jogo1 = FACIL;
	cout << "DIFICULDADE: " << jogo1 << endl;
	
	// Note que, qualquer enumerador que n�o recebe um valor tem seu valor posto 
	// como o valor do predecessor + 1.
	enum navePreco{NAVE_DE_COMBATE = 25, NAVE_BOMBARDEIRA, NAVE_CRUZADOR = 50};
	navePreco precoMinhaNave = NAVE_BOMBARDEIRA;
	
	cout << "Para melhorar minha nave a uma NAVE_CRUZADOR vai custar: " 
	<< (NAVE_CRUZADOR- precoMinhaNave) << " pontos de recurso. \n"; 
	
    return 0;       
}
