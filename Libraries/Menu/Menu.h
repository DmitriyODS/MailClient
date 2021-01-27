//
// Created by osipo on 26.01.2021.
//

#ifndef MAILCLIENT_MENU_H
#define MAILCLIENT_MENU_H

#include "./ItemMenu.h"

namespace ODS {

    template<class T>
    class Menu {
    public:

        typedef int(*func)();

    private:
        ItemMenu<T> *m_items{};
    };

}

#endif //MAILCLIENT_MENU_H
