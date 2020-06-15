#ifndef STRUCT
#define STRUCT

#include <stddef.h>

struct element {
    char* key;
    size_t value;
};

typedef struct element element;

typedef struct list_node {
    element e;
    struct list_node* next;
} l_node, *list;

typedef struct bs_tree_node {
    element e;
    struct bs_tree_node* left;
    struct bs_tree_node* right;
} bst_node, *bs_tree;

typedef struct avl_node {
    bst_node n;
    int balance;
} avl_node, *avl_tree;

element** gragh_array;



#endif
