#ifndef LR2_LOGO_H
#define LR2_LOGO_H

#include <ScreenInterface.h>


class Logo : public ScreenInterface {
    int runExec(Context *cntx) override;

    void render() const override;
};


#endif //LR2_LOGO_H
