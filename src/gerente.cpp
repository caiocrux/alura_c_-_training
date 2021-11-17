/* Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "gerente.hpp"

Gerente::Gerente(Cpf cpf,
                 std::string nome,
                 float salario,
                 std::string senha,
                 DiasDaSemana dia_do_pagamento):
    Funcionario(cpf, nome, salario, dia_do_pagamento), Autenticavel(senha) {
}

float Gerente::bonificacao() const {
    return get_salario_funcionario() * 0.5;
}
