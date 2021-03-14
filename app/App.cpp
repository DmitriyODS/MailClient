#include "App.h"

App::App(string app_name, string app_ver)
        : m_app_name(std::move(app_name)), m_app_version(std::move(app_ver)) {

}

int App::execution() {
    while (m_running) {

    }

    return 0;
}
