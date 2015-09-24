#include "CafeDecorator.h"
#ifndef CANELA_H
#define CANELA_H
class CafeDecorator;
class Canela : public CafeDecorator{
public:
	static void preparar(){
		Cafe::preparar("Canela");
	}
	int getPreco(){
		return 3 + CafeDecorator::getPreco();
	}
};
#endif