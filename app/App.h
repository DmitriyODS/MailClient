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

// Класс, который является контейнером для всего приложения
class App {
public:
    // Создаём типы, которые будем использовать в классе
    // Тип стэка экранов
    using StackScreens = std::stack<ScreenInterface *>;

    // Тип карты экранов (id: screen)
    using MapScreens = std::map<ScreensID, ScreenInterface *>;

    App() = delete;

    App(const App &app) = delete;

    App &operator=(const App &app) = delete;

    // Главный конструктор класса
    // Принимает название программы, версию, экраны в виде карты, id первого экрана
    App(string app_name, string app_ver, MapScreens map_screens, ScreensID main_screen_id);

    // Метод запуска программы
    int execution();

private:
    // Хранит объект со всей информацией о приложении
    Context m_cntx{};

    // Стэк экранов
    StackScreens m_stack_screens{};

    // Указатель на текущий экран
    ScreenInterface *m_current_screen{};

    // Карта экранов по id
    MapScreens m_map_screens{};

    // Метод настройки приложения
    void _init(ScreensID main_screen_id);

    // Метод обработки вернувшигося контекста
    void _processContext();

    // Метод закрытия экрана
    void _closeScreen();

    // Метод открытия экрана
    void _openScreen(bool close_cur = false);
};


#endif //LR2_APP_H
