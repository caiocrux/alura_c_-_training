/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include <string>
#include <iostream>
#include "titular.hpp"
#include "cpf.hpp"

Titular::Titular(Cpf cpf, std::string nome, std::string senha):
                Pessoa(cpf, nome), Autenticavel(senha) {
}

std::string Titular::get_nome_titular() {
    return m_nome;
}
