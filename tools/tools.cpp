#include <iostream>

#include "./tools.h"


id_t generateId() {
    return static_cast<id_t>(time(nullptr));
}

void logger(const std::string &text, LevelLog level_log) {
    switch (level_log) {
        case LevelLog::information:
            std::clog << '\n' << text << std::endl;
            break;
        case LevelLog::error:
            std::cerr << '\n' << text << std::endl;
            break;
        default:
            //TODO: Пока так, потом можно будет заморочиться,
            // но, зачем? :)
            std::clog << '\n' << text << std::endl;
            break;
    }
}
