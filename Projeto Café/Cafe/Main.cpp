// Cafe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Maquina.h"
class Maquina;

int _tmain(int argc, _TCHAR* argv[])
{
	Maquina* maqCafe = new Maquina();
	maqCafe->Run();
	std::cout << "Volte sempre!(pro inferno MUWAHUHWAU)"<<"\n";
	system("pause");
	return 0;
}

