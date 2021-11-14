/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_GERENTE_HPP_
#define INCLUDE_GERENTE_HPP_

#include <string>
#include "cpf.hpp"
#include "pessoa.hpp"
#include "funcionario.hpp"
#include "autenticavel.hpp"

class Gerente final: public Funcionario, public Autenticavel {
 public:
    Gerente(Cpf cpf, std::string nome, float salario, std::string senha);
    virtual float bonificacao() const;
};
#endif  // INCLUDE_GERENTE_HPP_
