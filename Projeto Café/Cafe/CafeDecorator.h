#include "Cafe.h"
#ifndef CAFE_DECORATOR_H
#define CAFE_DECORATOR_H
class Cafe;

class CafeDecorator : public Cafe{
public:	
	CafeDecorator(){};
	~CafeDecorator(){};
	static void preparar(){
		return Cafe::preparar();
	}
	int getPreco(){
		return Cafe::getPreco();
	}

};
#endif