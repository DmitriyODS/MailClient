#ifndef LR2_CONSOLEMENU_H
#define LR2_CONSOLEMENU_H

#include <string>
#include <vector>
#include <iostream>

#include "../globals/itemsID.h"
#include "./ItemMenu.h"


using std::vector;
using std::string;

class ConsoleMenu {
public:
    using ListItem = vector<ItemMenu *>;

    ConsoleMenu() = delete;

    ConsoleMenu(const ConsoleMenu &consoleMenu) = delete;

    ConsoleMenu &operator=(const ConsoleMenu &consoleMenu) = delete;

    ConsoleMenu(Id access_level, string title, ListItem listItem);

    string getTitle() const;

    ConsoleMenu &addItem(ItemMenu *itemMenu);

    int runCommand(size_t num_item);

    ConsoleMenu &show(std::ostream &out);

    //TODO: Очень плохая функция, позволяет делать с объектом
    // вне класса всё, что угодно
    // но пока пусть будет, не хочется заморачиваться
    // после неё обязательно нужно вызывать commit.
    // Сделана функция для того, чтобы удобно редактировать:
    // видимость, название и прочие поля эелемнта меню
    ItemMenu *getItemForEditById(Id id_item);

    ConsoleMenu &commit();

    friend std::ostream &operator<<(std::ostream &out, ConsoleMenu &consoleMenu);

    Id getAccessLevel() const;

    ConsoleMenu &setAccessLevel(Id access_level);

    size_t getSelectItem() const;

private:
    string m_title{};
    ListItem m_lst_items{};
    size_t m_select_item{};
    ListItem m_visible_items{};
    Id m_current_access_level{};

    void _reinitVisibleItems();
};


#endif //LR2_CONSOLEMENU_H
