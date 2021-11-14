/* Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#include "autenticavel.hpp"

Autenticavel::Autenticavel(std::string senha): m_senha(senha) {
}

bool Autenticavel::autentica(std::string senha) const {
    return (senha == this->m_senha);
}
