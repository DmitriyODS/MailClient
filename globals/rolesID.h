#ifndef LR2_ROLESID_H
#define LR2_ROLESID_H

#include <iostream>

#include "globalTypes.h"


enum class AccessLevel : const id_t{
        ADMIN_USER = 0x001,
        LOCAL_USER = 0x002
};

#endif //LR2_ROLESID_H
