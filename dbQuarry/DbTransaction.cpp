#include <iostream>
#include <filesystem>

#include "DbTransaction.h"


DbTransaction::DbTransaction(string root_dir, string name_stg)
        : m_root_directory(std::move(root_dir)), m_name_storage(std::move(name_stg)) {}

DbTransaction &DbTransaction::connectStorage() {
    return *this;
}

bool DbTransaction::_checkValidRootDir() {

    return false;
};


