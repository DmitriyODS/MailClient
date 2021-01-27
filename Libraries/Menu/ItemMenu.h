//
// Created by osipo on 26.01.2021.
//

#ifndef MAILCLIENT_ITEMMENU_H
#define MAILCLIENT_ITEMMENU_H

#include <iostream>

#include "../MyString/MyString.h"


namespace ODS {

    template<class T>
    class ItemMenu {
    public:

        typedef T typeFunc;

        ItemMenu(MyString *name, MyString *info, size_t num, T func) :
                m_name(name), m_info(info), m_number(num), m_func(func) {}

        ItemMenu(const ItemMenu<T> &itemMenu) = delete;

        friend std::ostream &operator<<(std::ostream &out, const ItemMenu<T> &itemMenu) {
            out << itemMenu.m_number << ". ";
            out << itemMenu.m_name << std::endl;
        }

        bool isCompare(size_t select) {
            return select == m_number;
        }

        void operator()() {
            m_func();
        }

    private:
        MyString *m_name{};
        MyString *m_info{};
        size_t m_number{};
        T m_func{};
    };
}

#endif //MAILCLIENT_ITEMMENU_H
