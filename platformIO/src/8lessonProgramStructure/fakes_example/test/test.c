#include "fff.h"
#include "unity.h"
#include "lamp_controller.h"
#include "distance_monitoring_system.h"


DEFINE_FFF_GLOBALS

void setUp(void){}
void tearDown(void) {}

FAKE_VALUE_FUNC(uint8_t, button_pressed);
FAKE_VOID_FUNC(button_init);

FAKE_VOID_FUNC(led_init);
FAKE_VOID_FUNC(led_on);
FAKE_VOID_FUNC(led_off);
FAKE_VOID_FUNC(led_toggle);
FAKE_VOID_FUNC(periodic_task_init_a, void*, uint32_t);


void lamp_controller()
{
    lamp_controller_init();
    
    TEST_ASSERT_EQUAL(1, led_init_fake.call_count);
    TEST_ASSERT_EQUAL(1, periodic_task_init_a_fake.call_count);
    TEST_ASSERT_EQUAL(1, button_init_fake.call_count);
}



void d_m_s_test(){

}





// Test that it sendst stuff nonBlocking. 

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(lamp_controller);
  RUN_TEST(d_m_s_test);



  return UNITY_END();
}