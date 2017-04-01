//
// Created by Javi on 1/4/17.
//

#include <set>
#include <string>
#include "Password.h"
using namespace std;

Password::Password(const std::string& password) {
    this->password = password;
}

bool Password::isValid() const {
    return hasMinimumLength() &&
           containsUppercase() &&
           containsLowercase() &&
           containsNumber() &&
            containsSpecialChar();
}

bool Password::containsLowercase() const { return any_of(begin(password), end(password), islower); }

bool Password::containsUppercase() const { return any_of(begin(password), end(password), isupper); }

bool Password::hasMinimumLength() const { return (password.length() >= 8); }

bool Password::containsNumber() const {
    return any_of(begin(password),end(password),::isnumber);
}

bool Password::containsSpecialChar() const {
    auto isSpecialChar = [] (auto c) {
        set<char> specialChars = {'_','-','$','%'};
        return specialChars.count(c);
    };
    return any_of(begin(password),end(password), isSpecialChar);
}
