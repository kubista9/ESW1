#include "unity.h"
#include "rectangle.h"

void setUp(void) {
    // Setup code, if needed
}

void tearDown(void) {
    // Cleanup code, if needed
}

void test_rectangle_create(void) {
    rectangle_t rect;
    rectangle_error_t result = rectangle_create(&rect, 5, 10);

    TEST_ASSERT_EQUAL(SUCCESS, result);
    TEST_ASSERT_EQUAL(5, rectangle_get_width(&rect));
    TEST_ASSERT_EQUAL(10, rectangle_get_height(&rect));
    TEST_ASSERT_EQUAL(50, rectangle_get_area(&rect));
    TEST_ASSERT_EQUAL(30, rectangle_get_perimeter(&rect));
}

void test_invalid_rectangle_create(void) {
    rectangle_t rect;
    rectangle_error_t result = rectangle_create(&rect, -5, 10);

    TEST_ASSERT_EQUAL(INVALID_ARGUMENT, result);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_rectangle_create);
    RUN_TEST(test_invalid_rectangle_create);
    return UNITY_END();
}
