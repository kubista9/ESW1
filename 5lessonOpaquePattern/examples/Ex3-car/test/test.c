#include <unity.h>
#include "car.h"

car_t test_car;
void setUp(void)
{
    test_car = car_create("Fiat", "Panda", 25, 40, 20, 21.7);
}

void tearDown(void)
{
    car_destroy(test_car);
}

void test_car_increased_hp()
{

    TEST_ASSERT_EQUAL(25, car_get_horsepower(test_car));

    car_boost_horsepower(test_car, 7);
    TEST_ASSERT_EQUAL(25 + 7, car_get_horsepower(test_car));
}

void test_car_getModel(){
TEST_ASSERT_EQUAL_CHAR_ARRAY("Panda", car_get_model(test_car), 6);

}

void test_car_get_km_before_empty(){
    double result = 20*21.7; 
    TEST_ASSERT_EQUAL(result, car_distance2empty(test_car));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_car_increased_hp);
    RUN_TEST(test_car_getModel);
    RUN_TEST(test_car_get_km_before_empty);

    return UNITY_END();
}