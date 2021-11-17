/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_FUNCIONARIO_HPP_
#define INCLUDE_FUNCIONARIO_HPP_

#include <string>
#include "cpf.hpp"
#include "pessoa.hpp"
#include "dias_da_semana.hpp"

class Funcionario: public Pessoa {
 public:
    Funcionario(Cpf cpf,
                std::string nome,
                float salario,
                DiasDaSemana dia_do_pagamento);
    float get_salario_funcionario(void) const;
    virtual float bonificacao() const = 0;
 protected:
    float m_salario;
    DiasDaSemana m_dia_do_pagamento;
};
#endif  // INCLUDE_FUNCIONARIO_HPP_
