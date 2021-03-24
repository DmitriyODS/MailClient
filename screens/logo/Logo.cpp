#include <iostream>
#include <Intent.h>

#include "Logo.h"


int Logo::runExec(Context *cntx) {
    render();
    getchar();

    cntx->m_intent.parse_action = TypesAction::OPEN_NEW_CLOSE;
    cntx->m_intent.parse_scrren = ScreensID::AUTH;

    return 0;
}

void Logo::render() const {
    std::cout << "\t==============================\n";
    std::cout << "\t==========MailClient==========\n";
    std::cout << "\t==============================\n";
    std::cout << "\tCreator by Osipovskiy Dmitriy\n";
    std::cout << "\tVersion code 0.1\n";
    std::cout << "\t==============================\n";
    std::cout << "Press any key for start app ...\n";
}
