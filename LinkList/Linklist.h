//
// Created by kitsc on 24-7-28.
//

#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
#define TRUE 1
#define FALSE 0
#define OK 1
#define OVERFLOW -1
typedef int ElemType;
typedef int Status;
typedef int apile;


typedef struct Lnode {
    ElemType data;
    struct Lnode *next;
} Lnode, *LinkList;

Status InitLIst(LinkList *L);

Status DestroyList_L(LinkList *L);

int ListEmpty(LinkList L);

void ClearList(const LinkList *L);

Status ListInsert_L(const LinkList *L, const int i, const ElemType e);

Status ListDelete_L(const LinkList *L, const int i);

int ListLength_L(const LinkList L);

Status GetElem_L(const LinkList L, const int i, ElemType *e);

Lnode *LocateElem_P(LinkList L, ElemType e);

int LocateElem_I(LinkList L, ElemType e);

Status CreateList_H(LinkList *L, int n);

Status CreateList_R(LinkList *L, int n);

#endif //LINKLIST_H
