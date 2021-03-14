#ifndef LR2_ITEMMENU_H
#define LR2_ITEMMENU_H

#include <iostream>
#include <string>


using std::string;

class ItemMenu {
public:
    using PerformedFunc = int (*)(size_t);

    ItemMenu(const ItemMenu &itemMenu) = delete;

    ItemMenu &operator=(const ItemMenu &itemMenu) = delete;

    ItemMenu(string title, PerformedFunc exe_func);

    string getTitle() const;

    int operator()(size_t num_item);

    ItemMenu &setTitle(const string &title);

    ItemMenu &setPerfFunc(PerformedFunc exe_func);

    friend std::ostream &operator<<(std::ostream &out, const ItemMenu &itemMenu);

private:
    string m_title{};
    PerformedFunc m_exe_func{};
};


#endif //LR2_ITEMMENU_H
