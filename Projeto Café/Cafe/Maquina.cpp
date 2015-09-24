#include "stdafx.h"
#include "Maquina.h"

void Maquina::cafePreto(){
	Acucar::preparar();
	Preto::preparar();
	Leite::preparar();
}
void Maquina::capuccino(){
	Canela::preparar();
	Creme::preparar();
	Preto::preparar();
}
///TODO: Implementar a possibilidade de opcao da maquina
void Maquina::Run(){
	std::cout << "Bem vindo a Maquina maluca v1.0 BETA" << "\n" << "Favor selecionar uma das opcoes abaixo";
	std::cout << "1 - Fazer um cafeh" << "\n";
	std::cout << "2 - Fazer um capuccino" << "\n";
	std::cout << "0 ou Qualquer outra tecla para sair do programa" << "\n";
}