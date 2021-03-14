#ifndef LR2_APP_H
#define LR2_APP_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

#include <User.h>
#include <Mail.h>


using std::string;

class App {
public:
    using MapUsers = std::map<string, User *>;
    using ListMails = std::vector<Mail *>;

    App() = delete;

    App(const App &app) = delete;

    App &operator=(const App &app) = delete;

private:
    string m_app_name{};
    string m_app_version{};
    MapUsers m_map_users{};
    ListMails m_lst_mails{};
    User *m_current_user{};
    bool running{};

    void _init();
};


#endif //LR2_APP_H
