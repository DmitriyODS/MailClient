#ifndef LR2_PARSINGINTERFACE_H
#define LR2_PARSINGINTERFACE_H


#include <string>
#include <map>


using std::ofstream;
using std::ifstream;
using std::string;

using MapData = std::map<string, string>;

struct ParsingData {
    string name_table;
    MapData data;
};

class ParsingInterface {
public:
    virtual bool parseInDb() = 0;

    virtual bool parseFromDb() = 0;
};


#endif //LR2_PARSINGINTERFACE_H
