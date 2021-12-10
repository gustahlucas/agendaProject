//
// Created by gustavo on 11/11/2021.
//

#ifndef AGENDAPROJECT_USER_H
#define AGENDAPROJECT_USER_H
#include <string>

class User {
private:

    std::string name;
    std::string email;

public:

    const std::string &getName() const ;
    void setName(const std::string &name);
    const std::string &getEmail() const ;
    void setEmail(const std::string &email);
    User();

    User( const std::string &name, const std::string &email );
};
#endif //AGENDAPROJECT_USER_H
