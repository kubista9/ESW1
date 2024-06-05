#include "car.h"

int main(){

car_t myCar = car_create("Fiat","Panda", 25, 40, 20, 21.7 );
car_print_info(myCar);
car_destroy(myCar);

}