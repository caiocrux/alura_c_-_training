/* Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome,
             float salario,
             DiasDaSemana dia_do_pagamento):
             Funcionario(cpf, nome, salario, dia_do_pagamento) {
}

float Caixa::bonificacao() const {
    return get_salario_funcionario() * 0.1;
}
