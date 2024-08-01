//
// Created by kitsc on 2024/8/1.
//

#include "DuLinkList.h"

// 初始化一个双向链表
bool InitDuList(DuLinkList *L)
{
    if (L == NULL)
    {
        fprintf(stderr, "InitList: NULL pointer passed as argument.\n");
        return false;
    }
    (*L) = (DuLNode *)calloc(1, sizeof(DuLNode));
    if ((*L) == NULL)
    {
        fprintf(stderr, "InitList: Memory allocation failed.\n");
        return false;
    }
    (*L)->next = (*L)->prior = NULL;
    return true;
}

// 销毁双向链表
bool DesDuList(DuLinkList *L)
{
    if (L == NULL || (*L) == NULL)
    {
        return false;
    }
    DuLNode *p = (*L)->next;
    while (p != NULL)
    {
        DuLNode *q = p;
        p = p->next;
        free(q);
    }
    free(*L);
    (*L) = NULL;
    return true;
}

// 构造一个双向链表
bool AssignDuList(DuLinkList *L, ElemType val)
{
    if (L == NULL || (*L) == NULL)
    {
        fprintf(stderr, "InsertLink: NULL pointer passed as argument or list is uninitialized.\n");
        return false;
    }

    DuLNode *p = (DuLNode *)malloc(sizeof(DuLNode));
    if (p == NULL)
    {
        fprintf(stderr, "InsertLink: Memory allocation failed.\n");
        return false;
    }

    p->data = val;
    p->next = (*L)->next;
    p->prior = (*L);
    if ((*L)->next != NULL)
    {
        (*L)->next->prior = p;
    }
    (*L)->next = p;
    return true;
}

// 查找第i个元素的地址
DuLNode *GetElemP_DuL(DuLinkList *L, int i)
{
    if (L == NULL || (*L) == NULL || (*L)->next == NULL)
    {
        return false;
    }
    if (i < 1)
    {
        return false;
    }
    int j = 1;
    DuLNode *p = (*L)->next;
    while (p != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    if (p == NULL || j > i)
    {
        return NULL;
    }
    return p;
}

bool InsertDuList(DuLinkList *L, int i, ElemType val)
{
    if (L == NULL || (*L) == NULL)
        return false;

    if (i < 1)
        return false;
    DuLNode *p = GetElemP_DuL(L, i);
    if (p == NULL)
        return false;
    DuLNode *NewNode = (DuLNode *)malloc(sizeof(DuLNode));
    if (NewNode == NULL)
        return false;
    NewNode->data = val;
    NewNode->prior = p->prior;
    NewNode->next = p;
    p->prior->next = NewNode;
    p->prior = NewNode;
    return true;
}

bool DelDulist(DuLinkList *L, int i)
{
    if (L == NULL || (*L) == NULL || (*L)->next == NULL)
    {
        return false;
    }
    if (i < 1)
    {
        return false;
    }
    DuLNode *p = GetElemP_DuL(L, i);
    if (p == NULL)
        return false;

    if (p->prior == NULL && p->next == NULL)
    {
        return false;
    }
    p->prior->next = p->next;
    if (p->next != NULL)
    {
        p->next->prior = p->prior;
    }
    p->next = p->prior = NULL;
    free(p);
    p = NULL;
    return true;
}

void PrintList(DuLinkList L)
{
    DuLNode *p = L->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}