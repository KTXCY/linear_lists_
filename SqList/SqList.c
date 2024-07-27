//
//

#include "SqList.h"

Status InitList(SqList *L) {
    ElemType *p = (ElemType *) malloc(sizeof(ElemType) * MAXSIZE);
    if (p == NULL) {
        return FALSE;
    }
    L->Elem = p;
    L->length = 0;
    return TRUE;
}

Status DestroyList(SqList *L) {
    if (L == NULL) {
        return FALSE;
    }
    if (L->Elem) {
        free(L->Elem);
    }
    L->length = 0;
    return TRUE;
}


Status InsertList(SqList *L, const int i, const ElemType val) {
    if (L == NULL || L->Elem == NULL) {
        return FALSE;
    }
    if (i < 1 || i > L->length + 1) {
        return FALSE;
    }
    if (L->length == MAXSIZE) {
        return FALSE;
    }
    int j = 0;
    for (j = L->length - 1; j >= i - 1; j--) {
        L->Elem[j + 1] = L->Elem[j];
    }
    L->Elem[i - 1] = val;
    L->length++;
    return OK;
}


Status DeleteList(SqList *L, const int i) {
    if (L == NULL || L->Elem == NULL) {
        return FALSE;
    }
    if (i < 1 || i > L->length) {
        return FALSE;
    }
    int j = 0;
    for (j = i - 1; j <= L->length - 1; j++) {
        L->Elem[j] = L->Elem[j + 1];
    }
    L->length--;
    return TRUE;
}

void ClearList(SqList *L) {
    L->length = 0;
}

int GetLength(const SqList L) {
    return L.length;
}

int IsEmpty(const SqList L) {
    if (L.length == 0) {
        return 1;
    } else {
        return 0;
    }
}

int GetElem(const SqList L, const int i, ElemType *e) {
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    *e = L.Elem[i - 1];
    return OK;
}

void Print(const SqList L) {
    int i = 0;
    for (i = 0; i < L.length; i++) {
        printf("%d ", L.Elem[i]);
    }
    printf("\n");
}

int LocateElem(const SqList L, const ElemType e) {
    for (int i = 0; i < L.length; i++) {
        if (L.Elem[i] == e) {
            return i + 1;
        }
    }
    return 0;
}
