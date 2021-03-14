#include <ctime>

#include "../tools/tools.h"
#include "ItemMenu.h"


ItemMenu::ItemMenu(Id id, Id access_level, string title, ItemMenu::PerformedFunc exe_func)
        : m_id(id), m_access_level(access_level), m_title(std::move(title)), m_exe_func(exe_func) {
    if (m_title.empty()) {
        m_title = "Title item";
    }
}

string ItemMenu::getTitle() const {
    return m_title;
}

int ItemMenu::operator()(size_t num_item) {
    return m_exe_func(num_item);
}

ItemMenu &ItemMenu::setTitle(const string &title) {
    if (title.empty()) {
        return *this;
    }

    m_title = title;

    return *this;
}

ItemMenu &ItemMenu::setPerfFunc(ItemMenu::PerformedFunc exe_func) {
    m_exe_func = exe_func;

    return *this;
}

std::ostream &operator<<(std::ostream &out, const ItemMenu &itemMenu) {
    out << itemMenu.getTitle();

    return out;
}

bool ItemMenu::isVisible() const {
    return m_visible;
}

ItemMenu &ItemMenu::setVisible(bool is_visible) {
    m_visible = is_visible;

    return *this;
}

Id ItemMenu::getId() const {
    return m_id;
}

void ItemMenu::_generateId() {
    m_id = generateId();
}

Id ItemMenu::getAccessLevel() const {
    return m_access_level;
}

ItemMenu &ItemMenu::setAccessLevel(Id access_level) {
    m_access_level = access_level;

    return *this;
}
