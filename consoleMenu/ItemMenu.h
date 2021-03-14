#ifndef LR2_ITEMMENU_H
#define LR2_ITEMMENU_H

#include <iostream>
#include <string>

#include "../globals/itemsID.h"


using std::string;

class ItemMenu {
public:
    using PerformedFunc = int (*)(size_t);

    ItemMenu(const ItemMenu &itemMenu) = delete;

    ItemMenu &operator=(const ItemMenu &itemMenu) = delete;

    ItemMenu() = delete;

    ItemMenu(Id id, Id access_level, string title, PerformedFunc exe_func);

    string getTitle() const;

    int operator()(size_t num_item);

    ItemMenu &setTitle(const string &title);

    ItemMenu &setPerfFunc(PerformedFunc exe_func);

    friend std::ostream &operator<<(std::ostream &out, const ItemMenu &itemMenu);

    bool isVisible() const;

    ItemMenu &setVisible(bool is_visible);

    Id getAccessLevel() const;

    ItemMenu &setAccessLevel(Id access_level);

    Id getId() const;

private:
    string m_title{};
    PerformedFunc m_exe_func{};
    bool m_visible{};
    Id m_id{};
    Id m_access_level{};

    void _generateId();
};


#endif //LR2_ITEMMENU_H
