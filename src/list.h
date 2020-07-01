#ifndef __LIST_H__
#define __LIST_H__

#include "tags.h"

struct list {
    v_ptr element;
    struct list* pre;
    struct list* next;
    struct list* tail;
};

typedef struct list list;

list* push(list* l, v_ptr e);
v_ptr pop(list **l);
v_ptr peek(list* l);

#endif
