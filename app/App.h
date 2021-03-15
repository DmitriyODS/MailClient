#ifndef LR2_APP_H
#define LR2_APP_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>

#include <User.h>
#include <Mail.h>
#include <ScreenInterface.h>
#include <Context.h>
#include <Intent.h>


using std::string;

class App {
public:
    using StackScreens = std::stack<ScreenInterface *>;

    App() = delete;

    App(const App &app) = delete;

    App &operator=(const App &app) = delete;

    App(string app_name, string app_ver);

    int execution();

private:
    Context m_cntx{};
    StackScreens m_stack_screens{};
    ScreenInterface *m_current_screen{};

    void _init();
};


#endif //LR2_APP_H
