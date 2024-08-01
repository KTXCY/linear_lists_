//
// Created by kitsc on 2024/8/1.
//

#ifndef DULINKLIST_H
#define DULINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct DuLNode
{
    ElemType data;
    struct DuLNode *prior;
    struct DuLNode *next;
} DuLNode, *DuLinkList;

bool InitDuList(DuLinkList *L);

bool DesDuList(DuLinkList *L);

bool AssignDuList(DuLinkList *L, ElemType val);

DuLNode *GetElemP_DuL(DuLinkList *L, int i);

bool InsertDuList(DuLinkList *L, int i, ElemType val);

bool DelDulist(DuLinkList *L, int i);

void PrintList(DuLinkList L);

#endif //DULINKLIST_H
