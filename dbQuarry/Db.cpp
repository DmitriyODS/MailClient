#include <iostream>
#include <sqlite3.h>

#include "Db.h"
#include "../tools/tools.h"
#include "../globals/unistd.h"


Db::Db(string root_dir, string name_stg)
        : m_name_root_dir(std::move(root_dir)), m_name_file_base(std::move(name_stg)) {
    _init();
}

void Db::_init() {
    fs::path workdir = fs::current_path() / m_name_root_dir;

    bool err{};

    if (!fs::exists(workdir)) {
        err = fs::create_directory(workdir);
        if (err) {
            logger("Error! Failed to create working directory for base!", LevelLog::criticalError);
            exit(1);
        }
    }

    m_root_dir = workdir;

    if (chdir(reinterpret_cast<const char *>(m_root_dir.c_str()))) {
        err = fs::create_directory(workdir);
        if (err) {
            logger("Error, unable to change working directory!", LevelLog::criticalError);
            exit(1);
        }
    }
}

Db &Db::connectDb() {
    if (sqlite3_open(m_name_file_base.c_str(), &m_db)) {
        string err_msg{
                "Error creating or connecting to the database!",
                sqlite3_errmsg(m_db)
        };
        logger(err_msg, LevelLog::criticalError);

        sqlite3_close(m_db);
        exit(1);
    }
    m_connect = true;

    return *this;
}

Db &Db::disconnectDb() {
    sqlite3_close(m_db);

    m_connect = false;

    return *this;
}

string Db::getNameRootDir() const {
    return m_name_root_dir;
}

string Db::getNameFileDb() const {
    return m_name_file_base;
}

bool Db::isConnect() const {
    return m_connect;
}

Db &Db::saveObject(ParsingInterface &object) {
    //TODO: Сохранение объекта в БД
    //TODO: Реализуется через вытягивание объекта ParseData (struct)

    return *this;
}

Db &Db::restoreObject(ParsingInterface &object) {
    //TODO: Восстановление объекта из БД

    return *this;
}

Db &Db::finalize() {
    //TODO: Какие - то операции по закреплению данных в БД

    return *this;
}

Db::~Db() {
    disconnectDb();
    finalize();
}
