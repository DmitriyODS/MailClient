#include "App.h"


App::App(string app_name, string app_ver, App::MapScreens map_screens, ScreensID main_screen_id)
        : m_cntx(Context{std::move(app_name), std::move(app_ver)}), m_map_screens(std::move(map_screens)) {
    _init(main_screen_id);
}

int App::execution() {
    while (m_cntx.running) {
        m_current_screen->runExec(&m_cntx);
        _processContext();
    }

    return 0;
}

void App::_init(ScreensID main_screen_id) {
    m_cntx.running = true;
    m_current_screen = m_map_screens.at(main_screen_id);
}

void App::_processContext() {
    switch (m_cntx.m_intent.parse_action) {
        case TypesAction::CLOSE: {
            _closeScreen();
            break;
        }
        case TypesAction::OPEN_NEW: {
            _openScreen();
            break;
        }
        case TypesAction::OPEN_NEW_DATA: {
            //TODO: Пока логика одинакова
            // потом может быть будет какая - то валидация?
            _openScreen();
            break;
        }
        default: {
            break;
        }
    }
}

void App::_closeScreen() {
    if (m_stack_screens.empty()) {
        m_cntx.running = false;
    } else {
        m_current_screen = m_stack_screens.top();
        m_stack_screens.pop();
    }
}

void App::_openScreen() {
    m_stack_screens.push(m_current_screen);
    m_current_screen = m_map_screens.at(m_cntx.m_intent.parse_scrren);
}
