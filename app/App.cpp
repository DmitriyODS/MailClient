#include "App.h"

#include <utility>

App::App(string app_name, string app_ver)
        : m_cntx(Context{std::move(app_name), std::move(app_ver)}) {
    _init();
}

int App::execution() {
    while (m_cntx.running) {

    }

    return 0;
}

void App::_init() {

}
