
#include "lamp_controller.h"
#include "distance_monitoring_system.h"


int main(){
    lamp_controller_init();
    distance_monitoring_system_init();
    while (1)
    {
        distance_monitoring_system_measure_and_send();
        
    }

}