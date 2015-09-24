#include "CafeDecorator.h"

class Creme : public CafeDecorator{
public:
	static void preparar(){
		Cafe::preparar("Creme de Baunilha");
	}
	int getPreco(){
		return 1 + CafeDecorator::getPreco();
	}
};