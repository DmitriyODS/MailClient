#include <App.h>

#include "./screens/auth/Auth.h"

#include "./globals/screensID.h"
#include "./globals/resApp.h"


App::MapScreens *initScreens() {
    return new App::MapScreens{
            {ScreensID::AUTH, new Auth()}
    };
}

int main() {
    App::MapScreens *mapScreens = initScreens();

    App app(APP_NAME, APP_VERSION, *mapScreens, ScreensID::AUTH);

    return app.execution();
}
