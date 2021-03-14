#ifndef LR2_TOOLS_H
#define LR2_TOOLS_H

#include <ctime>
#include <string>

#include "../globals/itemsID.h"

enum class LevelLog {
    information,
    debag,
    warning,
    error,
    criticalError
};


Id generateId();

void logger(const std::string& text, LevelLog level_log = LevelLog::information);

#endif //LR2_TOOLS_H
