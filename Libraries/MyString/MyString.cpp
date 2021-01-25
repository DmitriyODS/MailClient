//
// Created by osipo on 25.01.2021.
//

#include "MyString.h"


namespace ODS {


    size_t MyString::size() const {
        if (m_len == 0) {
            return 0;
        }

        return m_len - 1;
    }

    MyString &MyString::addSymbol(char symbol) {
        const char *tmp = m_string;
        m_string = new char[++m_len]{};
        strcpy(m_string, tmp);
        m_string[m_len - 2] = symbol;
        delete[] tmp;
        m_end = m_string + m_len;

        return *this;
    }

    MyString &MyString::addSymbolStart(char symbol) {
        if (m_len == 1) {
            addSymbol(symbol);
        } else {
            const char *tmp = m_string;
            m_string = new char[++m_len]{};
            m_string[0] = symbol;
            strcpy(m_string + 1, tmp);
            delete[] tmp;
            m_end = m_string + m_len;
        }

        return *this;
    }

    MyString &MyString::addString(const char *c_str) {
        for (const char *p_ch = c_str; *p_ch; ++p_ch) {
            addSymbol(*p_ch);
        }

        return *this;
    }

    MyString &MyString::addStringStart(const char *c_str) {
        const char *tmp = m_string;
        _initString();
        addString(c_str);
        addString(tmp);
        delete[] tmp;

        return *this;
    }

    void MyString::_initString() {
        m_len = 1;
        m_string = new char[m_len]{};
        m_end = m_string + m_len;
    }

    MyString::~MyString() {
        delete[] m_string;
    }

    MyString &MyString::erase() {
        delete[] m_string;
        m_len = 0;
        _initString();

        return *this;
    }

    MyString::MyString() {
        _initString();
    }

    MyString::MyString(const char *c_str) : MyString() {
        addString(c_str);
    }

    MyString::MyString(const MyString &str) : MyString(str.m_string) {}

    MyString::MyString(const char *c_str_1, const char *c_str_2) : MyString(c_str_1) {
        addString(c_str_2);
    }

    MyString::MyString(const char *c_str, size_t count) : MyString(c_str) {
        duplicationString(count);
    }

    MyString &MyString::duplicationString(size_t count) {
        const char *tmp = m_string;
        _initString();

        for (size_t i{}; i < count; ++i) {
            addString(tmp);
        }

        delete[] tmp;

        return *this;
    }

    MyString::MyString(char symbol) : MyString() {
        addSymbol(symbol);
    }

    MyString::MyString(char symbol, size_t count) : MyString(symbol) {
        duplicationString(count);
    }

    MyString::MyString(const MyString &str, const char *c_str) : MyString(str) {
        addString(c_str);
    }

    MyString::MyString(const MyString &str, char symbol) : MyString(str) {
        addSymbol(symbol);
    }

    MyString::MyString(const MyString &str, size_t count) : MyString(str) {
        duplicationString(count);
    }

    char *MyString::getCStr() {
        char *c_str = new char[m_len]{};
        strcpy(c_str, m_string);
        return c_str;
    }

    const char *MyString::c_str() {
        return m_string;
    }

    std::ostream &operator<<(std::ostream &out, const MyString &str) {
        out << str.m_string;
        return out;
    }

    std::istream &operator>>(std::istream &in, MyString &str) {
        char ch{};
        while (in.get(ch) && ch != '\n') {
            str.addSymbol(ch);
        }

        return in;
    }

    MyString &MyString::deleteBack(size_t count) {
        m_len -= count;

        if (m_len < 1) {
            erase();
            _initString();

            return *this;
        }

        m_string[m_len - 1] = '\0';
        const char *tmp = m_string;
        m_string = new char[m_len]{};

        strcpy(m_string, tmp);

        m_end = m_string + m_len;
        delete[] tmp;

        return *this;
    }

    bool MyString::isEmpty() const {
        return !(bool) m_len;
    }

    MyString &MyString::deleteStart(size_t count) {
        m_len -= count;

        if (m_len < 1) {
            erase();
            _initString();

            return *this;
        }

        const char *tmp = m_string + count;
        m_string = new char[m_len]{};

        strcpy(m_string, tmp);

        m_end = m_string + m_len;
        delete[] (tmp - count);

        return *this;
    }

    MyString::MyString(const MyString &str_1, const MyString &str_2) : MyString(str_1) {
        addString(str_2.m_string);
    }

    MyString MyString::operator+(const MyString &str) {
        return MyString(*this, str);
    }

    MyString MyString::operator+(const char *c_str) {
        return MyString(*this, c_str);
    }

    MyString MyString::operator+(char symbol) {
        return MyString(*this, symbol);
    }

    MyString &MyString::operator+=(const MyString &str) {
        addString(str.m_string);
        return *this;
    }

    MyString &MyString::operator+=(const char *c_str) {
        addString(c_str);
        return *this;
    }

    MyString &MyString::operator+=(char symbol) {
        addSymbol(symbol);
        return *this;
    }

    MyString MyString::operator*(size_t count) {
        return MyString(m_string, count);
    }

    MyString &MyString::operator*=(size_t count) {
        duplicationString(count);
        return *this;
    }

    MyString &MyString::operator--(int) {
        deleteBack();
        return *this;
    }

    MyString &MyString::operator--() {
        deleteStart();
        return *this;
    }

    MyString &MyString::operator-=(size_t count) {
        deleteBack(count);
        return *this;
    }

    MyString MyString::operator-(size_t count) {
        return MyString(m_string).deleteBack(count);
    }

    char &MyString::operator[](size_t index) {
        return m_string[index % m_len];
    }

    MyString::const_iterator MyString::end() const {
        return const_iterator(m_end);
    }

    MyString::const_iterator MyString::begin() const {
        return const_iterator(m_string);
    }

    MyString::iterator MyString::end() {
        return iterator(m_end);
    }

    MyString::iterator MyString::begin() {
        return iterator(m_string);
    }
}
