/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "cpf.hpp"
#include <string>
#include <iostream>

Cpf::Cpf(std::string cpf):
    cpf_titular(cpf) {
}

std::string Cpf::get_cpf_titular(void) {
    return cpf_titular;
}
