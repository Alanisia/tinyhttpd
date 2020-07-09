#include "../alg_math.h"

int horner(int x, int a[], int len) {
    int p = a[len - 1];
    for (int i = len - 2;i >= 0;i--) {
        p = x * p + a[i];
    }
    return p;
}
