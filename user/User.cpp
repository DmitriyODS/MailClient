#include <cstring>

#include "User.h"
#include "../tools/tools.h"


User::User(id_t access_level, string name, string surname, string login, string password)
        : m_access_level(access_level), m_name(std::move(name)), m_surname(std::move(surname)),
          m_login(std::move(login)), m_password(std::move(password)) {
    _generateId();
}

void User::_generateId() {
    m_id = generateId();
}

id_t User::getAccessLevel() const {
    return m_access_level;
}

User &User::setAccessLevel(id_t access_level) {
    m_access_level = access_level;

    return *this;
}

id_t User::getId() const {
    return m_id;
}

string User::getName() const {
    return m_name;
}

string User::getSurname() const {
    return m_surname;
}

string User::getLogin() const {
    return m_login;
}

string User::getPassword() const {
    return m_password;
}

User &User::setName(const string &name) {
    if (name.empty()) {
        return *this;
    }
    m_name = name;

    return *this;
}

User &User::setSurname(const string &surname) {
    if (surname.empty()) {
        return *this;
    }
    m_surname = surname;

    return *this;
}

User &User::setLogin(const string &login) {
    if (login.empty()) {
        return *this;
    }
    m_login = login;

    return *this;
}

User &User::setPassword(const string &password) {
    if (password.empty()) {
        return *this;
    }
    m_password = password;

    return *this;
}

void User::_restoreUser(id_t id_user, id_t access_level,
                        const string &name,
                        const string &surname,
                        const string &login,
                        const string &password) {
    m_id = id_user;
    m_name = name;
    m_surname = surname;
    m_login = login;
    m_password = password;
}

bool User::parseInDb(ofstream &out_f) {
    //TODO:: Реализовать парсинг в БД

    return false;
}

bool User::parseFromDb(ifstream &in_f) {
    //TODO:: Реализовать парсинг из БД

    return false;
}
