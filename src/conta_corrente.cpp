/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.*/

#include <string>
#include <iostream>
#include "conta_corrente.hpp"
#include "conta.hpp"
#include "titular.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular):
    Conta(numero, titular) {
}

ContaCorrente::~ContaCorrente() {
    std::cout << "Conta Poupanca destruida" << std::endl;
}

float ContaCorrente::get_retorna_taxa() const {
    std::cout << "Usando a taxa de 5% por ser conta corrente !" << std::endl;
    return 0.05;
}

void ContaCorrente::transfere_dinheiro(Conta* destino, float valor) {
    sacar(valor);
    destino->depositar(valor);
}

