#include "ItemMenu.h"

ItemMenu::ItemMenu(string title, ItemMenu::PerformedFunc exe_func)
        : m_title(std::move(title)), m_exe_func(exe_func) {
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
