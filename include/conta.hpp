/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CONTA_HPP_
#define INCLUDE_CONTA_HPP_

#include <string>
#include <titular.hpp>

class Conta {
 public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    virtual float get_retorna_taxa(void) const = 0;
    void depositar(float valorADepositar);
    float retorna_saldo(void) const;
    void definir_numero_titular(std::string numero_titular);
    std::string get_numero_titular();
    static int get_quantidade_contas();
 private:
    static int numero_de_conta;
    std::string numero;
 protected:
    float saldo = 0;
};
#endif  // INCLUDE_CONTA_HPP_
