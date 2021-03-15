#ifndef LR2_CONTEXT_H
#define LR2_CONTEXT_H

#include <string>
#include <map>
#include <vector>

#include <User.h>
#include <Mail.h>
#include <Intent.h>


using std::string;

using MapUsers = std::map<string, User *>;
using ListMails = std::vector<Mail *>;

//TODO: Возможно потом перепишется в класс
struct Context {
    string app_name{};
    string app_ver{};
    MapUsers map_users{};
    ListMails lst_mails{};
    User *current_user{};
    bool running{};
    Intent m_intent{};
};


#endif //LR2_CONTEXT_H
