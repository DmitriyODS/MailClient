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

#include "../globals/screensID.h"


using std::string;

class App {
public:
    using StackScreens = std::stack<ScreenInterface *>;
    using MapScreens = std::map<ScreensID, ScreenInterface *>;

    App() = delete;

    App(const App &app) = delete;

    App &operator=(const App &app) = delete;

    App(string app_name, string app_ver, MapScreens map_screens, ScreensID main_screen_id);

    int execution();

private:
    Context m_cntx{};
    StackScreens m_stack_screens{};
    ScreenInterface *m_current_screen{};
    MapScreens m_map_screens{};

    void _init(ScreensID main_screen_id);

    void _processContext();

    void _closeScreen();

    void _openScreen();
};


#endif //LR2_APP_H
