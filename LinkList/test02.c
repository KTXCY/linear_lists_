//
// Created by kitsc on 24-7-28.
//

#include "Linklist.h"

int main() {
    Lnode *p = NULL;
    InitLIst(&p);
    ListInsert_L(&p, 1, 1);
    ListInsert_L(&p, 1, 2);
    ListInsert_L(&p, 1, 3);
    ListInsert_L(&p, 1, 4);
    ListInsert_L(&p, 1, 5);
    ListInsert_L(&p, 1, 6);
    ListInsert_L(&p, 1, 7);
    ListInsert_L(&p, 8, 8);
    int a = 0;
    GetElem_L(p, 1, &a);
    printf("%d\n", a);
    DestroyList_L(&p);
    return 0;
}
