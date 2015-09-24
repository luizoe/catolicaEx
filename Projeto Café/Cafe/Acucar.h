#include "CafeDecorator.h"

class CafeDecorator;

class Acucar : public CafeDecorator{
public:
	Acucar(){};
	~Acucar(){};
	static void preparar(){
		Cafe::preparar("Acucar");
	}
	int getPreco(){
		return 3 + CafeDecorator::getPreco();
	}
};