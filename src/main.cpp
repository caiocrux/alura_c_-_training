/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include <iostream>
#include "SampleConfig.h"
#include "conta.hpp"
#include "titular.hpp"
#include "cpf.hpp"
#include "funcionario.hpp"
#include "pessoa.hpp"
#include "conta_poupanca.hpp"
#include "conta_corrente.hpp"
#include "caixa.hpp"
#include "gerente.hpp"
#include "autenticavel.hpp"
#include "dias_da_semana.hpp"

void version() {
  std::cout << "Version : " << SAMPLE_VERSION_MAJOR <<
    "." << SAMPLE_VERSION_MINOR <<
    "." << SAMPLE_VERSION_PATCH << std::endl;
}

void ExibeSaldo(const Conta& conta) {
    std::cout << "O saldo da Conta é " << conta.retorna_saldo() << std::endl;
}

std::ostream& operator<<(std::ostream& cout, const Conta& conta) {
    Pessoa<Cpf> titular = conta.m_titular;
    std::cout << " O saldo da conta é (operator) " << conta.retorna_saldo() <<
    std::endl;
    std::cout << "O titular da conta é " << titular.retorna_nome() << std::endl;
}

void RealizarSaque(Conta* conta, int valor) {
    /*std::cout << "retirando " << valor << " da conta" << std::endl;
    std::cout << "foi sacado o valor de " << conta->sacar(valor).first << " ---"
	      << std::endl;
    */
    auto res = conta->sacar(valor);
    if (res.first == Conta::SUCESSO) {
        std::cout << "Dinheiro sacado com sucesso !!" << std::endl;
	std::cout << "Novo saldo é " << res.second << std::endl;
    } else if( res.first == Conta::SALDO_INSUFICIENTE) {
        std::cout << "Saldo Insuficiente !!" << std::endl;
    } else if( res.first == Conta::VALOR_NEGATIVO) {
        std::cout << "Saldo Insuficiente !!" << std::endl;
    }

}

void FazLogin(Autenticavel* alguem, std::string senha) {
    if (alguem->autentica(senha)) {
        std::cout << "Senha Correta !!" << std::endl;
    } else {
        std::cout << "Senha Incorreta !!" << std::endl;
    }
}

template <typename T>
T Menor(T a, T b) {
    return a < b ? a:b;
}
int main(void) {
  version();
  Cpf cpf("123.456.789-00");
  Titular titular(cpf, "Caio Felipe Cruz", "123pipoca");
  Titular titular_2(cpf, "Caio Cruz", "123pipoca");
  FazLogin(&titular, "123pocorn");
  //std::cout << "abrindo conta corrente" << std::endl;

  ContaCorrente minha_conta("1374", titular);
  Caixa func(cpf, "Caio Cruz ", 10000.00, DiasDaSemana::Sabado);
  // std::cout << "Minha bonificaao por ser caixa é de "
  // << func.bonificacao() << std::endl;
  Gerente func_1(cpf, "Caio Cruz ", 10000.00, "pipoca123", DiasDaSemana::Domingo);
  // FazLogin(&func_1, "pipoca123");
  // std::cout << "Minha bonificaao por ser gerente é de "
  // << func_1.bonificacao() << std::endl;

  minha_conta += 500;
  RealizarSaque(&minha_conta, 100);
  ExibeSaldo(minha_conta);
  //std::cout << minha_conta;
  //std::cout << "abrindo conta poupança" << std::endl;
  ContaCorrente outra_conta("1231", titular_2);
  outra_conta.depositar(350);
  //bool a = minha_conta < outra_conta;
  std::cout << Menor<Conta&>(minha_conta, outra_conta) << std::endl;

  //Conta::ResultadoDaOperacao res = outra_conta.sacar(1).first;
  auto res = outra_conta.sacar(13213131).first;
  std::cout << "Resultado da operacao sacar: " << res << std::endl;
  RealizarSaque(&outra_conta, 200);
  outra_conta.transfere_dinheiro(&minha_conta, 100);
  ExibeSaldo(outra_conta);
  ExibeSaldo(minha_conta);

/*
  ContaPoupanca* heap_conta = new  ContaPoupanca("424", titular);
  heap_conta->depositar(1000);
  RealizarSaque(*heap_conta, 500);
  ExibeSaldo(*heap_conta);
  delete (heap_conta);

  Conta* heap_conta_2 = new  ContaPoupanca("424", titular);
  heap_conta_2->depositar(1000);
  RealizarSaque(*heap_conta_2, 500);
  ExibeSaldo(*heap_conta_2);
  delete (heap_conta_2);
*/

/*  std::cout << "Titular da Conta é "
            << titular.get_nome_titular()
            << std::endl;
  std::cout << "O salario é  "
            << func.get_salario_funcionario()
            << std::endl;
  std::cout << "CPF do titular é "
            << cpf.get_cpf_titular()
            << std::endl;

  std::cout << "ID do titular é "
            << minha_conta.get_numero_titular()
            << std::endl;

  std::cout << "total de contas é  "
            << Conta::get_quantidade_contas()
            << std::endl;
*/
  return(0);
}
