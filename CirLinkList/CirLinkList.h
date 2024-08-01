//
// Created by kitsc on 2024/8/1.
//

#ifndef CIRLINKLIST_H
#define CIRLINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct CirLinkList {
    ElemType data;
    struct CirLinkList *next;
} LNode, *CirLinkList;

bool InitCirLinkList(CirLinkList *L);

bool DesCirLinkList(CirLinkList *L);

bool InsertCirLinkList(CirLinkList *L, int i, ElemType e);

bool DelCirLinkList(CirLinkList *L, int i);

bool CreateCirList_H(CirLinkList *L, int n);

bool CreateCirList_R(CirLinkList *L, int n);



#endif //CIRLINKLIST_H
