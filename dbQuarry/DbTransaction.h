#ifndef LR2_DBTRANSACTION_H
#define LR2_DBTRANSACTION_H

#include <fstream>
#include <string>

#include <ParsingInterface.h>


using std::fstream;
using std::string;

class DbTransaction {
public:
    DbTransaction() = delete;

    DbTransaction(const DbTransaction &dbTransaction) = delete;

    DbTransaction &operator=(const DbTransaction &dbTransaction) = delete;

    DbTransaction(string root_dir, string name_stg);

    ~DbTransaction();

    DbTransaction &connectStorage();

    DbTransaction &disconnectStorage();

    string getRootDir() const;

    DbTransaction &setRootDir();

    string getNameStorage() const;

    DbTransaction &setNameStorage() const;

    bool isConnect() const;

    DbTransaction &saveObject(ParsingInterface &object);

    DbTransaction &restoreObject(ParsingInterface &object);

    DbTransaction &finalize();

private:
    bool m_is_connect{};
    fstream m_current_storage{};
    string m_name_storage{};
    string m_root_directory{};

    bool _checkValidRootDir();
};


#endif //LR2_DBTRANSACTION_H
