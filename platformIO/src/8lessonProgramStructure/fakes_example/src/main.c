#include "lamp_controller.h"
#include "distance_monitoring_system.h"

int main()
{    
    lamp_controller_init();
    distance_monitoring_system_init(9600);

    while (1)
    {
        distance_monitoring_system_send_distance();
    }
}
