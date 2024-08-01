//
// Created by kitsc on 2024/8/1.
//

#include "CirLinkList.h"

int main() {
    LNode *p;
    InitCirLinkList(&p);
    InsertCirLinkList(&p, 1, 2);
    InsertCirLinkList(&p, 1, 3);
    InsertCirLinkList(&p, 2, 6);
    InsertCirLinkList(&p, 4, 6);
    DelCirLinkList(&p, 0);


    DesCirLinkList(&p);
    return 0;
}
