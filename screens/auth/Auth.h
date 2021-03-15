#ifndef LR2_AUTH_H
#define LR2_AUTH_H

#include <ScreenInterface.h>


class Auth : public ScreenInterface {
public:
    Auth() = default;

    int runExec(Context *cntx) override;
};


#endif //LR2_AUTH_H
