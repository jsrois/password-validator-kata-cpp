//
// Created by Javi on 1/4/17.
//

#ifndef PASSWORD_KATA_PASSWORD_H
#define PASSWORD_KATA_PASSWORD_H


#include <string>

class Password {
public:
    Password(std::string password);
    bool isValid() const {
        return true;
    }

    std::string password;
};


#endif //PASSWORD_KATA_PASSWORD_H
