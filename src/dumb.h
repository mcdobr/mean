#ifndef DUMB_H
#define DUMB_H

#include <assert.h>
#include <errno.h>
#include <stdlib.h>

int max(const int a, const int b) {
    return a >= b ? a : b;
}

int * const sum_arrays(const int * const first,
                const int first_length,
                const int * const second,
                const int second_length) {
    assert(first != NULL);
    assert(first_length > 0);
    assert(second != NULL);
    assert(second_length > 0);

    const int length = max(first_length, second_length);

    int * const result = (int *)malloc(length * sizeof(int));
    if (result == NULL) {
        exit(ENOMEM); 
    }
    for (int i = 0; i < length; ++i) {
        result[i] = first[i] + second[i];
    }

    return result;
}

#endif
