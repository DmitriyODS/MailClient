#ifndef LR2_ITEMMENU_H
#define LR2_ITEMMENU_H

#include <iostream>
#include <string>

#include "../globals/rolesID.h"


using std::string;

class ItemMenu {
public:
    using PerformedFunc = int (*)(size_t);

    ItemMenu(const ItemMenu &itemMenu) = delete;

    ItemMenu &operator=(const ItemMenu &itemMenu) = delete;

    ItemMenu() = delete;

    ItemMenu(id_t id, AccessLevel access_level, string title, PerformedFunc exe_func);

    string getTitle() const;

    int operator()(size_t num_item);

    ItemMenu &setTitle(const string &title);

    ItemMenu &setPerfFunc(PerformedFunc exe_func);

    friend std::ostream &operator<<(std::ostream &out, const ItemMenu &itemMenu);

    bool isVisible() const;

    ItemMenu &setVisible(bool is_visible);

    AccessLevel getAccessLevel() const;

    ItemMenu &setAccessLevel(AccessLevel access_level);

    id_t getId() const;

private:
    string m_title{};
    PerformedFunc m_exe_func{};
    bool m_visible{};
    id_t m_id{};
    AccessLevel m_access_level{};

    void _generateId();
};


#endif //LR2_ITEMMENU_H
