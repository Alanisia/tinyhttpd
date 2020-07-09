#ifndef __SORT_H__
#define __SORT_H__

#include "tags.h"
#include "util.h"

long binary_search(v_ptr, int , int , int );
void quick_sort(v_ptr,int ,int ,int (*compare));
int* merge_sort(v_ptr,v_ptr, int (*compare));

#endif
