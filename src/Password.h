//
// Created by Javi on 1/4/17.
//

#ifndef PASSWORD_KATA_PASSWORD_H
#define PASSWORD_KATA_PASSWORD_H


#include <string>

class Password {
public:
    Password(const std::string &password);
    bool isValid() const;
protected:
    std::string password;
    bool hasMinimumLength() const;
};


#endif //PASSWORD_KATA_PASSWORD_H
