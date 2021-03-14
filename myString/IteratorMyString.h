//
// Created by osipo on 25.01.2021.
//

#ifndef MAILCLIENT_ITERATORMYSTRING_H
#define MAILCLIENT_ITERATORMYSTRING_H


namespace ODS {

    template<class T>
    class IteratorMyString {

        // добавление дружественного класса
        friend class MyString;

    public:

        // конструктор копирования
        IteratorMyString(const IteratorMyString<T> &it) : m_symbol(it.m_symbol) {}

        // метод сравнения
        bool operator==(const IteratorMyString<T> &it) const {
            return m_symbol == it.m_symbol;
        }

        // метод сравнения с не
        bool operator!=(const IteratorMyString<T> &it) const {
            return m_symbol != it.m_symbol;
        }

        // перемещение по итератору
        IteratorMyString<T> &operator++() {
            ++m_symbol;

            return *this;
        }

        // разыменование итератора
        T &operator*() const {
            return *m_symbol;
        }

    private:
        T *m_symbol{};

        // приватный конструктор итератора
        explicit IteratorMyString(T *p) : m_symbol(p) {}
    };
}

#endif //MAILCLIENT_ITERATORMYSTRING_H
