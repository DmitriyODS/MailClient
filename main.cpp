#include <iostream>


#include <ConsoleMenu.h>
#include <ItemMenu.h>


int func1(size_t item) {
    std::cout << "Item " << item << std::endl;
    return item;
}

int func2(size_t item) {
    std::cout << "Item " << item << std::endl;
    return item;
}

int func3(size_t item) {
    std::cout << "Item " << item << std::endl;
    return item;
}

int main() {
    ConsoleMenu consoleMenu("My menu",
                            ConsoleMenu::ListItem{
                                    new ItemMenu("Item 1", func1),
                                    new ItemMenu("Item 2", func2),
                                    new ItemMenu("Item 3", func3)
                            });

    std::cout << consoleMenu << std::endl;

    consoleMenu.runCommand(1);

    return 0;
}
