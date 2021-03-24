#ifndef LR2_USER_H
#define LR2_USER_H

#include <iostream>
#include <string>
#include <ParsingInterface.h>

#include "../globals/itemsID.h"


using std::string;

class User : public ParsingInterface {
public:
    User() = delete;

    User(const User &user) = delete;

    User &operator=(const User &user) = delete;

    User(
            id_t access_level,
            string name,
            string surname,
            string login,
            string password
    );

    bool parseFromDb() override;

    bool parseInDb() override;

    id_t getAccessLevel() const;

    User &setAccessLevel(id_t access_level);

    id_t getId() const;

    string getName() const;

    string getSurname() const;

    string getLogin() const;

    string getPassword() const;

    User &setName(const string &name);

    User &setSurname(const string &surname);

    User &setLogin(const string &login);

    User &setPassword(const string &password);

private:
    id_t m_access_level{};
    id_t m_id{};
    string m_login{};
    string m_name{};
    string m_surname{};
    string m_password{};

    //TODO: Возможно не нужен, удалить?
    void _restoreUser(
            id_t id_user,
            id_t access_level,
            const string &name,
            const string &surname,
            const string &login,
            const string &password
    );

    void _generateId();
};


#endif //LR2_USER_H
