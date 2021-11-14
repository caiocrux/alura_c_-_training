/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CONTA_CORRENTE_HPP_
#define INCLUDE_CONTA_CORRENTE_HPP_

#include <string>
#include <conta.hpp>
#include <titular.hpp>

class ContaCorrente final: public Conta {
 public:
     ContaCorrente(std::string numero, Titular titular);
     ~ContaCorrente();
     float get_retorna_taxa() const override;
     void  transfere_dinheiro(Conta* destino, float valor);
};

#endif  // INCLUDE_CONTA_CORRENTE_HPP_
