/* Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "funcionario.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario):
                         Pessoa(cpf, nome),
                         m_salario(salario) {
}

float Funcionario::get_salario_funcionario(void) const {
    return m_salario;
}
