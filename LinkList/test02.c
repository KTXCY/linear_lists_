//
// Created by kitsc on 24-7-28.
//

#include "Linklist.h"

int main() {
    Lnode *p = NULL;
    InitLIst(&p);
    CreateList_H(&p,3);
    DestroyList_L(&p);
    return 0;
}
