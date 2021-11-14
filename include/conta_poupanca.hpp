/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CONTA_POUPANCA_HPP_
#define INCLUDE_CONTA_POUPANCA_HPP_

#include <string>
#include <conta.hpp>
#include <titular.hpp>

class ContaPoupanca final: public Conta {
 public:
     ContaPoupanca(std::string numero, Titular titular);
     ~ContaPoupanca();
     float get_retorna_taxa() const override;
};

#endif  // INCLUDE_CONTA_POUPANCA_HPP_
