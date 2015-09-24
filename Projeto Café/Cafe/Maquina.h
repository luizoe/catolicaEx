//Classe principal sem ela o programa nao roda
#include "Cafe.h"
#include "CafeDecorator.h"

//Classes de ingredientes 
#include "Canela.h"
#include "Creme.h"
#include "Preto.h"
#include "Acucar.h"
#include "Leite.h"

//Ordem de referencia das classes
class Cafe;
class CafeDecorator;
class Canela;
class Creme;
class Preto;

class Maquina{
public:
	Maquina(){};
	~Maquina(){};
	void cafePreto();
	void capuccino();
	void Run();
};