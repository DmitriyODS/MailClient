#include "ConsoleMenu.h"


ConsoleMenu::ConsoleMenu(string title, ConsoleMenu::ListItem listItem)
        : m_title(std::move(title)), m_lst_items(std::move(listItem)) {
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
    if (num_item < m_lst_items.size()) {
        m_select_item = num_item;
        return (*m_lst_items.at(num_item))(num_item);
    }

    return -1;
}

std::ostream &operator<<(std::ostream &out, const ConsoleMenu &consoleMenu) {
    out << consoleMenu.m_title << "\n======================\n";

    size_t index_item{1};

    for (auto item : consoleMenu.m_lst_items) {
        out << index_item++ << ". " << *item << "\n";
    }

    out << "0. Exit\nSelect -> ";

    return out;
}

size_t ConsoleMenu::getSelectItem() const {
    return m_select_item;
}
