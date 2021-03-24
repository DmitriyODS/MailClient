#include "Mail.h"

#include "../tools/tools.h"
#include "../globals/globalTypes.h"


Mail::Mail(string login_sender, string login_recipient, string title, string text)
        : m_login_recipient(std::move(login_recipient)), m_login_sender(std::move(login_sender)),
          m_title(std::move(title)), m_text(std::move(text)) {
    _generateId();
    _generateDate();
}

void Mail::_generateId() {
    m_id = generateId();
}

void Mail::_generateDate() {
    m_date_send = time(nullptr);
}

Mail &Mail::setLoginSender(string login) {
    if (login.empty()) {
        return *this;
    }
    m_login_sender = login;

    return *this;
}

Mail &Mail::setLoginRecipient(string login) {
    if (login.empty()) {
        return *this;
    }
    m_login_recipient = login;

    return *this;
}

Mail &Mail::setTitle(string title) {
    m_title = title;

    return *this;
}

Mail &Mail::setText(string text) {
    m_text = text;

    return *this;
}

id_t Mail::getId() const {
    return m_id;
}

time_t Mail::getDateSend() const {
    return m_date_send;
}

string Mail::getLoginSender() const {
    return m_login_sender;
}

string Mail::getLoginRecipient() const {
    return m_login_recipient;
}

string Mail::getTitle() const {
    return m_title;
}

string Mail::getText() const {
    return m_text;
}

bool Mail::parseFromDb() {
    //TODO:: Реализовать парсинг

    return false;
}

bool Mail::parseInDb() {
    //TODO:: Реализовать парсинг

    return false;
}
