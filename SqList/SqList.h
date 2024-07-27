//
// Created by XCY on 2024/7/27.
//

#ifndef SQLIST_H
#define SQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define INFEASIBLE (-1)
#define OVERFLOW (-2)
#define MAXSIZE 100
typedef int Status;
typedef int ElemType;

typedef struct SqList {
    ElemType *Elem;
    int length;
} SqList;

Status InitList(SqList *L);

Status DestroyList(SqList *L);

Status InsertList(SqList *L, const int i, const ElemType val);

Status DeleteList(SqList *L, const int i);

void ClearList(SqList *L);

int GetLength(const SqList L);

int IsEmpty(const SqList L);

int GetElem(const SqList L, const int i, ElemType *e);

void Print(const SqList L);

int LocateElem(const SqList L, const ElemType e);

#endif //SQLIST_H
