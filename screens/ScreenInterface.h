#ifndef LR2_SCREENINTERFACE_H
#define LR2_SCREENINTERFACE_H

#include <Context.h>


class ScreenInterface {
public:
    virtual int runExec(Context *cntx) = 0;

    virtual void render() const = 0;
};


#endif //LR2_SCREENINTERFACE_H
