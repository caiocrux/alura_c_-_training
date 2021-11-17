/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_PESSOA_HPP_
#define INCLUDE_PESSOA_HPP_

#include <iostream>
#include <string>
#include "cpf.hpp"

class Pessoa {
 protected :
    Cpf m_cpf;
    std::string m_nome;
 public:
    Pessoa(Cpf cpf, std::string nome);
    std::string retorna_nome(void) const;
 private:
    void verificar_nome_caracter();
};
#endif  // INCLUDE_PESSOA_HPP_
