/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "pessoa.hpp"
#include "cpf.hpp"

Pessoa::Pessoa(Cpf cpf, std::string nome): m_cpf(cpf), m_nome(nome) {
        verificar_nome_caracter();
}

void Pessoa::verificar_nome_caracter() {
    if (m_nome.size() < 5) {
        std::cout << "Nome com o minimo de caracteres necessarios"
                  << std::endl;
        exit(1);
    }
}
