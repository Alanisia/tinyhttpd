#include <stdlib.h>
#include <stddef.h>
#include "list.h"

list* push(list *l, v_ptr e) {
    if (!l) {
        l = (list*)malloc(sizeof(list));
        l->element = e;
        l->tail = l;
        l->next = NULL;
        l->pre = NULL;
    } else {
        list* p = (list*)malloc(sizeof(list));
        l->tail->next = p;
        p->pre = l->tail;
        l->tail = p;
        p->next = NULL;
        p->tail = p;
        p->element = e;
    }
    return l;
}

v_ptr pop(list** l) {
    list* p = (*l)->next;
    list* q = *l;
    *l = p;
    q->next = NULL;
    p->pre = NULL;
    v_ptr e = q->element;
    free(q);
    return e;
}

v_ptr peek(list* l) {
    return l->element;
}
