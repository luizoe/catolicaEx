//Classe principal sem ela o programa nao roda
#include "Cafe.h"
#include "CafeDecorator.h"

//Classes de ingredientes 
#include "Canela.h"
#include "Creme.h"
#include "Preto.h"
#include "Acucar.h"
#include "Leite.h"
#include "Moeda.h"

//Ordem de referencia das classes
class Acucar;
class Cafe;
class CafeDecorator;
class Canela;
class Creme;
class Leite;
class Moeda;
class Preto;

// Versao da maquina de cafeh sempre que este programa for alterado, este macro ira ser alterado
#define VERSAO_CAFE "1.5"

class Maquina{
public:
	Maquina();
	~Maquina();
	void Run();
	void mostraTotal();
private:
	Moeda* cValor;
	double dTotal;
	bool bPerguntaDenovo;
	void cafePreto();
	void capuccino();
	void cafeAcucar();
	void cafeCreme();
	void cafeCremeAcucar();
	void cafeCremeDuplo();
	void selecionaOption(int opcao);
	void pergunta();
};