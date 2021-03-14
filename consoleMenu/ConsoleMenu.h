#ifndef LR2_CONSOLEMENU_H
#define LR2_CONSOLEMENU_H

#include <string>
#include <vector>
#include <iostream>

#include "./ItemMenu.h"

using std::vector;
using std::string;

class ConsoleMenu {
public:
    using ListItem = vector<ItemMenu *>;

    ConsoleMenu() = delete;

    ConsoleMenu &operator=(const ConsoleMenu &consoleMenu) = delete;

    ConsoleMenu(string title, ListItem listItem);

    string getTitle() const;

    ConsoleMenu &addItem(ItemMenu *itemMenu);

    int runCommand(size_t num_item);

    friend std::ostream &operator<<(std::ostream &out, const ConsoleMenu &consoleMenu);

    size_t getSelectItem() const;

private:
    string m_title{};
    ListItem m_lst_items{};
    size_t m_select_item{};
};


#endif //LR2_CONSOLEMENU_H
