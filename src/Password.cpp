//
// Created by Javi on 1/4/17.
//

#include "Password.h"

Password::Password(const std::string& password) {
    this->password = password;
}

bool Password::isValid() const {
    return true;
}
