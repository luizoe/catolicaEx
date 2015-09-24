#include "CafeDecorator.h"
#ifndef LEITE_H
#define LEITE_H
class CafeDecorator;

class Leite : public CafeDecorator{
public:
	Leite(){};
	~Leite(){};
	static void preparar(){
		Cafe::preparar("Leite");
	}
	int getPreco(){
		return 3 + CafeDecorator::getPreco();
	}
};
#endif