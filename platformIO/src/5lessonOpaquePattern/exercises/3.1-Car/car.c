#include "car.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct car_s{
    char  brand[30];
    char  model[30]; 
    int horse_power;
    double fuel_capacity;
    double current_fuel;
    double fuel_efficientcy;};


car_t car_create(const char * brand,const char * model, int horse_power, 
double fuel_capacity, double current_fuel, double fuel_efficientcy){
    car_t car = malloc(sizeof(struct car_s));
    strcpy(car->brand, brand);
    strcpy(car->model, model);
    car->horse_power=horse_power;
    car->fuel_capacity=fuel_capacity;
    car->current_fuel=current_fuel;
    car->fuel_efficientcy=fuel_efficientcy;
return car;
}

char * car_get_brand(car_t self){return self->brand;}
char * car_get_model(car_t self){return self->model;}
int car_get_horsepower(car_t self){return self->horse_power;}
double car_get_fuel_capacity(car_t self){return self->fuel_capacity;}
double car_get_curret_fuel(car_t self){return self->current_fuel;}
double car_get_fuel_Efficientcy(car_t self){return self->fuel_efficientcy;}

double car_distance2empty(car_t self){
return (self->fuel_efficientcy) * (self->current_fuel);
}

void car_print_info(car_t self){
    printf("Brand: %s\nModel: %s\nHorse Power: %d\n\n", self->brand, self->model, self->horse_power);
}

void car_boost_horsepower(car_t self, int increased_hp){
    self->horse_power+=increased_hp;
}

void car_destroy(car_t self){

    free(self);
}