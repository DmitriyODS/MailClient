#ifndef LR2_MAIL_H
#define LR2_MAIL_H

#include <iostream>
#include <string>
#include <ctime>

#include <ParsingInterface.h>


using std::string;

class Mail : public ParsingInterface {
public:
    Mail() = delete;

    Mail(const Mail &mail) = delete;

    Mail &operator=(const Mail &mail) = delete;

    bool parseFromDb(ifstream &in_f) override;

    bool parseInDb(ofstream &out_f) override;

    Mail(string login_sender, string login_recipient, string title, string text);

    Mail &setLoginSender(string login);

    Mail &setLoginRecipient(string login);

    Mail &setTitle(string title);

    Mail &setText(string text);

    id_t getId() const;

    time_t getDateSend() const;

    string getLoginSender() const;

    string getLoginRecipient() const;

    string getTitle() const;

    string getText() const;

private:
    time_t m_date_send{};
    id_t m_id{};
    string m_login_sender{};
    string m_login_recipient{};
    string m_title{};
    string m_text{};

    void _generateId();

    void _generateDate();
};


#endif //LR2_MAIL_H
