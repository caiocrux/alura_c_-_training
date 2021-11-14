/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_CPF_HPP_
#define INCLUDE_CPF_HPP_

#include <string>

class Cpf {
 public:
    explicit Cpf(std::string cpf);
    std::string get_cpf_titular(void);
 private:
    std::string cpf_titular;
};
#endif  // INCLUDE_CPF_HPP_
