#ifndef LR2_DB_H
#define LR2_DB_H

#include <fstream>
#include <string>
#include <sqlite3.h>

#include <ParsingInterface.h>


using std::fstream;
using std::string;

#ifdef _WINDOWS

#include <filesystem>

namespace fs = std::filesystem;
#else

#include <experimental/filesystem>

namespace fs = std::experimental::filesystem::v1;
#endif

class Db {
public:
    Db() = delete;

    Db(const Db &dbTransaction) = delete;

    Db &operator=(const Db &dbTransaction) = delete;

    Db(string root_dir, string name_file_base);

    ~Db();

    Db &connectDb();

    Db &disconnectDb();

    string getNameRootDir() const;

    string getNameFileDb() const;

    bool isConnect() const;

    Db &saveObject(ParsingInterface &object);

    Db &restoreObject(ParsingInterface &object);

    Db &finalize();

private:
    // заголовок объекта соединения с БД
    sqlite3 *m_db{};

    // строка ошибки
    char *m_err_base{};

    string m_name_file_base{};
    string m_name_root_dir{};
    fs::path m_root_dir{};
    bool m_connect{};

    void _init();
};


#endif //LR2_DB_H
