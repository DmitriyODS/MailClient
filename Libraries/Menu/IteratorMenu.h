//
// Created by osipo on 26.01.2021.
//

#ifndef MAILCLIENT_ITERATORMENU_H
#define MAILCLIENT_ITERATORMENU_H

#include "./ItemMenu.h"
#include "./Menu.h"


namespace ODS {

    template<class T>
    class IteratorMenu {

        friend class Menu<T>;

    public:

    private:
        ItemMenu<T> *m_item{};

        IteratorMenu()
    };

}

#endif //MAILCLIENT_ITERATORMENU_H
