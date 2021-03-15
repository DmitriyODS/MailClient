#include <iostream>
#include <Intent.h>

#include "Auth.h"


int Auth::runExec(Context *cntx) {
    std::cout << "All good!" << std::endl;

    cntx->m_intent.parse_action = TypesAction::CLOSE;

    return 0;
}
