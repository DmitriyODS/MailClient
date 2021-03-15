#ifndef LR2_INTENT_H
#define LR2_INTENT_H

#include <iostream>
#include <map>
#include <string>

#include "../globals/screensID.h"


using MapData = std::map<std::string, std::string>;

enum class TypesAction : const id_t{
        CLOSE,
        OPEN_NEW,
        OPEN_NEW_DATA
};

//TODO: Возможно потом перепишется в класс
struct Intent {
    TypesAction parse_action{};
    ScreensID parse_scrren{};
    MapData parse_data{};
};


#endif //LR2_INTENT_H
