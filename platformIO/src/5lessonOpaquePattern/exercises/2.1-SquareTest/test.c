//#include "unity.h"
#include "square.h"

void setUp(void) {}
void tearDown(void) {}

void test_create(void) {
    square_t square = square_create(4);
    TEST_ASSERT_EQUAL(4, square_get_sl(square));
}

void test_area(void) {
    square_t square = square_create(4);
    TEST_ASSERT_EQUAL(16, square_get_area(square));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create);
    RUN_TEST(test_area);
    return UNITY_END();
}
