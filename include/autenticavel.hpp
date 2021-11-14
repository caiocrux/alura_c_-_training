/*Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Licensed under the MIT License. See License file in the project root for license information.
*/

#ifndef INCLUDE_AUTENTICAVEL_HPP_
#define INCLUDE_AUTENTICAVEL_HPP_

#include <string>

class Autenticavel {
 public:
    explicit Autenticavel(std::string senha);
    bool autentica(std::string senha) const;
 private:
    std::string m_senha;
};
#endif  // INCLUDE_AUTENTICAVEL_HPP_
