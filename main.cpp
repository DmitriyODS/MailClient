#include <App.h>

#include "./screens/auth/Auth.h"
#include "./screens/logo/Logo.h"

#include "./globals/screensID.h"
#include "./globals/resApp.h"


// Функция для создания словаря экранов приложений
App::MapScreens *initScreens() {
    // Передаём ID экрана и новый объект нужного экрана
    return new App::MapScreens{
            {ScreensID::AUTH, new Auth()},
            {ScreensID::LOGO, new Logo()}
    };
}

int main() {
    // Инициализируем экраны приложения
    App::MapScreens *mapScreens = initScreens();

    // Создаём объект app и передаём ему значения
    App app(APP_NAME, APP_VERSION, *mapScreens, ScreensID::LOGO);

    // Вызываем главный метод приложения и ждём возвратного значения
    return app.execution();
}
