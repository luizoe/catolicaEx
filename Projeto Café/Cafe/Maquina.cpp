#include "stdafx.h"
#include "Maquina.h"
#include <iostream>
#include <string>

using namespace std;

Maquina::Maquina()
{
	bPerguntaDenovo = true;
	dTotal = 0;
	cValor = new Moeda(0);
}
Maquina::~Maquina()
{
	bPerguntaDenovo = false;//Meio sem sentido declarar no destrutor mas apenas para caso venha dar algum erro louco .
	dTotal = 0;
	cValor = NULL;
}
void Maquina::cafePreto()
{
	Acucar::preparar();
	Preto::preparar();
	Leite::preparar();
	cValor = new Moeda(0.35);

}
void Maquina::capuccino()
{
	Canela::preparar();
	Creme::preparar();
	Preto::preparar();
	cValor = new Moeda(0.35);
}
void Maquina::cafeAcucar()
{
	Preto::preparar();
	Leite::preparar();
	Acucar::preparar();
	cValor = new Moeda(0.35);
}
void Maquina::cafeCreme()
{
	Preto::preparar();
	Creme::preparar();
	cValor = new Moeda(0.35);
}
void Maquina::cafeCremeDuplo()
{
	Preto::preparar();
	Creme::preparar();
	Creme::preparar();
	cValor = new Moeda(0.35);
}
void Maquina::cafeCremeAcucar()
{
	Preto::preparar();
	Creme::preparar();
	Acucar::preparar();
	cValor = new Moeda(0.35);
}
///TODO: Implementar o recebimento de dinheiro e apresentar troco. Pois este programa por enquanto esta muito "Humano"
void Maquina::Run(){
	string opcao;
	cout << "Bem vindo a Maquina maluca v" << VERSAO_CAFE << " BETA" << "\n" << "Favor selecionar uma das opcoes abaixo" << "\n";	
	while (bPerguntaDenovo)
	{
		cout << "1 - Fazer um cafeh" << "\n";
		cout << "2 - Fazer um capuccino" << "\n";
		cout << "3 - Fazer um cafe com Creme" << "\n";
		cout << "4 - Fazer um cafe com Acucar" << "\n";
		cout << "5 - Fazer um cafe com Creme e Acucar" << "\n";
		cout << "6 - Fazer um cafe com Creme Duplo" << "\n";
		cout << "0 ou Qualquer outra tecla para sair do programa" << "\n";
		cin >> opcao;
		selecionaOption(atoi(opcao.c_str()));
	}
	mostraTotal();
}
void Maquina::selecionaOption(int opcao)
{
	switch (opcao)
	{
		case 1:
			cafePreto();
			dTotal += cValor->getPreco();
		break;
		case 2:
			capuccino();
			dTotal += cValor->getPreco();
		break;
		case 3:
			cafeCreme();
			dTotal += cValor->getPreco();
		break;
		case 4:
			cafeCreme();
			dTotal += cValor->getPreco();
		break;
		case 5:
			cafeCremeAcucar();
			dTotal += cValor->getPreco();
		break;
		case 6:
			cafeCremeDuplo();
			dTotal += cValor->getPreco();
		break;
		default:
			bPerguntaDenovo = false;
		break;
	}
	if (bPerguntaDenovo)   pergunta();
}
void Maquina::pergunta()
{
	char opcao;
	cout << "Voce deseja pedir algoa a mais?" << "\n";
	cout << "S - para selecionar uma opcao" << "\n";
	cout << "Qualquer outra tecla para apresentar o total gasto." << "\n";
	cin >> opcao;
	if (toupper(opcao) != 'S')	bPerguntaDenovo = false;
}
void Maquina::mostraTotal()
{
	cout << "Total a pagar R$:" << dTotal << "\n";
	cout << "Passe no caixa para pagar a conta!" << "\n";
}