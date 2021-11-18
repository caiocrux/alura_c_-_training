/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_PESSOA_HPP_
#define INCLUDE_PESSOA_HPP_

#include <iostream>
#include <string>
// #include "cpf.hpp"

template <typename Documento>
class Pessoa {
 protected :
    Documento documento;
    std::string m_nome;
 public:
    Pessoa(Documento documento, std::string nome): documento(documento), m_nome(nome) {
      verificar_nome_caracter();
    }
    std::string retorna_nome(void) const {
      return m_nome;
    }
 private:
    void verificar_nome_caracter() {
      if (m_nome.size() < 5) {
         std::cout << "Nome com o minimo de caracteres necessarios"
         << std::endl;
         exit(1);
      }
    }
};
#endif  // INCLUDE_PESSOA_HPP_
