#ifndef MOEDA_H
#define MOEDA_H

class Moeda{
public:
	Moeda(double valor){dPreco = valor;};
	~Moeda(){};
	double getPreco(){
		return dPreco;
	}
private:
	double dPreco;
};
#endif