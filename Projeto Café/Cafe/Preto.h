#include "CafeDecorator.h"

class CafeDecorator;
class Preto : public CafeDecorator{
public:
	Preto(){};
	~Preto(){};
	static void preparar(){
		Cafe::preparar("Cafeh preto");
	}
	int getPreco(){
		return 2 + CafeDecorator::getPreco();
	}
};