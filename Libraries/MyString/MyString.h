//
// Created by osipo on 25.01.2021.
//

#ifndef MAILCLIENT_MYSTRING_H
#define MAILCLIENT_MYSTRING_H

#include <iostream>
#include <cstring>

#include "./IteratorMyString.h"


namespace ODS {

    class MyString {
    public:

        typedef IteratorMyString<char> iterator;
        typedef IteratorMyString<const char> const_iterator;

        // конструктор по умолчанию
        MyString();

        // явный конструктор добавления C - строки
        explicit MyString(const char *c_str);

        // явный конструктор добавления символа
        explicit MyString(char symbol);

        // конструктор с двумя параметрами
        MyString(const char *c_str_1, const char *c_str_2);

        // конструктор дублирования С - строки
        MyString(const char *c_str, size_t count);

        // конструктор дублирования строки
        MyString(const MyString &str, size_t count);

        // конструктор дублирования буквы
        MyString(char symbol, size_t count);

        // метод дублирования строки
        MyString &duplicationString(size_t count);

        // конструктор копирования
        MyString(const MyString &str);

        // конструктор соединения C - строки и строки
        MyString(const MyString &str, const char *c_str);

        // конструктор соединения символа и строки
        MyString(const MyString &str, char symbol);

        // конструктор соединения двух строк
        MyString(const MyString &str_1, const MyString &str_2);

        // метод очистки строки
        MyString &erase();

        // метод получения C - строки
        char *getCStr();

        // метод конвертации в C - строку
        const char *c_str();

        // деструктор
        ~MyString();

        // метод возвращающий длину строки
        [[nodiscard]] size_t size() const;

        // метод добавления символа в конец строки
        MyString &addSymbol(char symbol);

        // метод добавления символа в начало строки
        MyString &addSymbolStart(char symbol);

        // метод добавления C - строки в конец строки
        MyString &addString(const char *c_str);

        // метод добавления C - строки в начало строки
        MyString &addStringStart(const char *c_str);

        // метод удаления символов с конца
        MyString &deleteBack(size_t count = 1);

        // метод проверки пустоты строки
        [[nodiscard]] bool isEmpty() const;

        // метод удаления символа с начала
        MyString &deleteStart(size_t count = 1);

        // метод склеивания строк
        MyString operator+(const MyString &str);

        // метод склеивания строки и C - строки
        MyString operator+(const char *c_str);

        // метод склеивания строки и символа
        MyString operator+(char symbol);

        // метод склеивания строк
        MyString &operator+=(const MyString &str);

        // метод склеивания строки и C - строки
        MyString &operator+=(const char *c_str);

        // метод склеивания строки и символа
        MyString &operator+=(char symbol);

        // метод дублирования строки
        MyString operator*(size_t count);

        // метод дублирования строки
        MyString &operator*=(size_t count);

        // метод удаления символов с конца строки
        MyString operator-(size_t count);

        // метод удаления символов с конца строки
        MyString &operator-=(size_t count);

        // метод удаления символов с конца строки
        MyString &operator--();

        // метод удаления символов с начала строки
        MyString &operator--(int);

        // вернуть итератор на начало строки
        iterator begin();

        // вернуть итератор на конец строки (после последнего)
        iterator end();

        // вернуть константный итератор на начало строки
        [[nodiscard]] const_iterator begin() const;

        // вернуть константный итератор на конец строки (после последнего)
        [[nodiscard]] const_iterator end() const;

        // метод возврата символа по индексу
        char &operator[](size_t index);

        // дружественная функция ввывода
        friend std::ostream &operator<<(std::ostream &out, const MyString &str);

        // дружественная функция ввода
        friend std::istream &operator>>(std::istream &in, MyString &str);

    private:
        size_t m_len{};
        char *m_string{};
        char *m_end{};

        // метод начальной инициализации строки
        void _initString();
    };

}

#endif //MAILCLIENT_MYSTRING_H
