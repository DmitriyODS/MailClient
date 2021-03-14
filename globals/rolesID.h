#ifndef LR2_ROLESID_H
#define LR2_ROLESID_H

#include <iostream>


enum class ACCESS_LEVEL : const id_t{
        ADMIN_USER = 0x001,
        LOCAL_USER = 0x002
};

#endif //LR2_ROLESID_H
