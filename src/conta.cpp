/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.*/

#include "conta.hpp"
#include <string>
#include <iostream>

int Conta::numero_de_conta = 0;

Conta::Conta(std::string numero, Titular titular):
    // Member Initializer Lists
    m_titular(titular),
    numero(numero),
    saldo(0) {
    numero_de_conta++;
}

Conta::~Conta() {
    std::cout << "Conta destruida!" << std::endl;
    numero_de_conta--;
}

std::pair <Conta::ResultadoDaOperacao,float> Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return std::make_pair(VALOR_NEGATIVO, saldo);
        }
    float tarifaDeSaque = valorASacar * get_retorna_taxa();
    valorASacar += tarifaDeSaque;
    if (valorASacar > saldo) {
            std::cout << "Saldo insuficiente" << std::endl;
            return std::make_pair(SALDO_INSUFICIENTE, saldo);
    }
    saldo -= valorASacar;
    return std::make_pair(SUCESSO, saldo);

}

void Conta::depositar(float valorADepositar) {
        if (valorADepositar < 0) {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return;
        }

        saldo += valorADepositar;
}

void Conta::operator+= (float valor){
    depositar(valor);
}
float Conta::retorna_saldo(void) const {
    return saldo;
}
/*
void Conta::definir_nome_titular(std::string nome)
{
    nome_titular = nome;
}

void Conta::definir_cpf_titular(std::string cpf)
{
    cpf_titular = cpf;
}

void Conta::definir_numero_titular(std::string numero_titular)
{
    numero = numero_titular;
}
*/
std::string Conta::get_numero_titular(void) {
    return numero;
}

int Conta::get_quantidade_contas(void) {
    return numero_de_conta;
}
