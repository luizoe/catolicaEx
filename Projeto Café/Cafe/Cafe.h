#include "stdafx.h"
#include <iostream>

#ifndef CAFE_H
#define CAFE_H
class Cafe{
public:
	Cafe(){};
	~Cafe(){};
	int getPreco();

	static void preparar();
	static void preparar(std::string Msg){
		std::cout << Msg.c_str()<<"\n";
	}
};
#endif