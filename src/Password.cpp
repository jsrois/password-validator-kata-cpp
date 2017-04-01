//
// Created by Javi on 1/4/17.
//

#include "Password.h"

Password::Password(const std::string& password) {
    this->password = password;
}

bool Password::isValid() const {
    return hasMinimumLength();
}

bool Password::hasMinimumLength() const { return (password.length() >= 8); }
