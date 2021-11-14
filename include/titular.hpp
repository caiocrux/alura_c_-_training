/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_TITULAR_HPP_
#define INCLUDE_TITULAR_HPP_

#include <string>
#include "cpf.hpp"
#include "pessoa.hpp"
#include "autenticavel.hpp"

class Titular: public Pessoa, public Autenticavel {
 public:
    Titular(Cpf cpf, std::string nome, std::string senha);
    std::string get_nome_titular();
};
#endif  // INCLUDE_TITULAR_HPP_
