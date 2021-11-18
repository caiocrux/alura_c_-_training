/*Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CONTA_HPP_
#define INCLUDE_CONTA_HPP_

#include <string>
#include <titular.hpp>
#include <utility>

class Conta {
 public:
    enum ResultadoDaOperacao {
        SUCESSO,
	FALHA,
	SALDO_INSUFICIENTE,
	VALOR_NEGATIVO
    };
    Conta(std::string numero, Titular titular);
    ~Conta();
    std::pair <ResultadoDaOperacao, float> sacar(float valorASacar);
    virtual float get_retorna_taxa(void) const = 0;
    void depositar(float valorADepositar);
    void operator+= (float valor);
    float retorna_saldo(void) const;
    void definir_numero_titular(std::string numero_titular);
    std::string get_numero_titular();
    static int get_quantidade_contas();
    bool operator<(const Conta& Conta);
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
 private:
    static int numero_de_conta;
    std::string numero;
    Titular m_titular;
 protected:
    float saldo = 0;
};
#endif  // INCLUDE_CONTA_HPP_
