//
// Created by XCY on 2024/7/27.
//

#include "SqList.h"

int main() {
    SqList L;
    srand((unsigned int) time(NULL));
    InitList(&L);
    for (int i = 1; i <= 10; i++) {
        int a = 1 + rand() % 1000;
        InsertList(&L, i, a);
    }
    Print(L);
    DeleteList(&L, 8);
    Print(L);
    int e;
    GetElem(L, 2, &e);
    printf("%d\n", e);
    DestroyList(&L);
    return 0;
}
