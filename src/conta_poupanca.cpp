/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.*/

#include <string>
#include <iostream>
#include "conta_poupanca.hpp"
#include "conta.hpp"
#include "titular.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):
    Conta(numero, titular) {
}

ContaPoupanca::~ContaPoupanca() {
    std::cout << "Conta Poupanca destruida" << std::endl;
}

float ContaPoupanca::get_retorna_taxa() const {
    std::cout << "Usando a taxa de 3% por ser conta corrente !" << std::endl;
    return 0.03;
}
