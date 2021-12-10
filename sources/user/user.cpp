//
// Created by gustavo on 11/11/2021.
//

#include "user.h"

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getEmail() const {
    return email;
}

void User::setEmail(const std::string &email) {
    User::email = email;
}

User::User() {}

User::User( const std::string &name, const std::string &email ) : name( name ), email( email ) {}
