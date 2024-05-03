#include <unity.h>
#include "../src/dumb.h"

void setUp() {
}

void tearDown() {
}

void should_sum_up_arrays(void) {
    int first[] = {1, 2, 3, 4};
    int second[] = {10, 11, 12, 13};
    int expected[] = {11, 13, 15, 17};

    int *result = sum_arrays(first, sizeof(first) / sizeof(first[0]), second, sizeof(second) / sizeof(second[0]));

    TEST_ASSERT_NOT_NULL(result);
    TEST_ASSERT_EQUAL_MEMORY(expected, result, 4);
}


int main(void) {
    UNITY_BEGIN();

    RUN_TEST(should_sum_up_arrays);

    return UNITY_END();
}
