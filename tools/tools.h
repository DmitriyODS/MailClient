#ifndef LR2_TOOLS_H
#define LR2_TOOLS_H

#include <ctime>
#include <string>

enum class LevelLog : const id_t{
        information,
        debag,
        warning,
        error,
        criticalError
};


id_t generateId();

void logger(const std::string &text, LevelLog level_log = LevelLog::information);

#endif //LR2_TOOLS_H
