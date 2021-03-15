#include "ConsoleMenu.h"
#include "../globals/rolesID.h"


ConsoleMenu::ConsoleMenu(AccessLevel access_level, string title, ConsoleMenu::ListItem listItem)
        : m_current_access_level(access_level), m_title(std::move(title)), m_lst_items(std::move(listItem)) {
    if (m_title.empty()) {
        m_title = "Title Menu";
    }
}

string ConsoleMenu::getTitle() const {
    return m_title;
}

ConsoleMenu &ConsoleMenu::addItem(ItemMenu *itemMenu) {
    m_lst_items.push_back(itemMenu);

    return *this;
}

int ConsoleMenu::runCommand(size_t num_item) {
    if (num_item < m_visible_items.size()) {
        m_select_item = num_item;
        return (*m_visible_items.at(num_item))(num_item);
    }

    return -1;
}

ConsoleMenu &ConsoleMenu::show(std::ostream &out) {
    out << m_title << "\n======================\n";

    size_t index_item{};

    for (auto item : m_visible_items) {
        if (item->isVisible()) {
            out << index_item++ << ". " << *item << "\n";
        }
    }

    out << "\nSelect -> ";

    return *this;
}

std::ostream &operator<<(std::ostream &out, ConsoleMenu &consoleMenu) {
    consoleMenu.show(out);

    return out;
}

size_t ConsoleMenu::getSelectItem() const {
    return m_select_item;
}

void ConsoleMenu::_reinitVisibleItems() {
    m_visible_items.clear();

    for (auto item : m_lst_items) {
        if (item->isVisible() &&
            (item->getAccessLevel() == m_current_access_level || m_current_access_level == AccessLevel::ADMIN_USER)) {
            m_visible_items.push_back(item);
        }
    }
}

ConsoleMenu &ConsoleMenu::commit() {
    //TODO: Нужна для финализации изменений в пунктах меню/
    // Обязательно вызывать после функции: getItemForEditById

    _reinitVisibleItems();

    return *this;
}

ItemMenu *ConsoleMenu::getItemForEditById(id_t id_item) {
    for (auto item : m_lst_items) {
        if (item->getId() == id_item) {
            return item;
        }
    }

    return nullptr;
}

AccessLevel ConsoleMenu::getAccessLevel() const {
    return m_current_access_level;
}

ConsoleMenu &ConsoleMenu::setAccessLevel(AccessLevel access_level) {
    m_current_access_level = access_level;

    return *this;
}
