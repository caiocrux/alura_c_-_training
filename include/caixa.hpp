/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CAIXA_HPP_
#define INCLUDE_CAIXA_HPP_

#include <string>
#include "cpf.hpp"
#include "pessoa.hpp"
#include "funcionario.hpp"

class Caixa final: public Funcionario {
 public:
    Caixa(Cpf cpf, std::string nome, float salario);
    virtual float bonificacao() const;
};
#endif  // INCLUDE_CAIXA_HPP_
