#ifndef LR2_PARSINGINTERFACE_H
#define LR2_PARSINGINTERFACE_H


#include <fstream>

using std::ofstream;
using std::ifstream;


class ParsingInterface {
public:
    virtual bool parseInDb(ofstream &out_f) = 0;

    virtual bool parseFromDb(ifstream &in_f) = 0;
};


#endif //LR2_PARSINGINTERFACE_H
