//
// Created by Javi on 1/4/17.
//

#include "Password.h"
using namespace std;

Password::Password(const std::string& password) {
    this->password = password;
}

bool Password::isValid() const {
    return hasMinimumLength() &&
           containsUppercase() &&
           containsLowercase();
}

bool Password::containsLowercase() const { return any_of(begin(password), end(password), islower); }

bool Password::containsUppercase() const { return any_of(begin(password), end(password), isupper); }

bool Password::hasMinimumLength() const { return (password.length() >= 8); }
