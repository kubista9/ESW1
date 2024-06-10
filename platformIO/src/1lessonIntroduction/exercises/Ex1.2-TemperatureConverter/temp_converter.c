#include "temp_converter.h"

float temp_converter_toFahrenheit(float celsius){ 
    return (celsius * 9/5) + 32;
}

float temp_converter_toKelvin(float celsius) {
    return celsius + 273.15;
}

const char* temp_converter_determineStateOfWater(float celsius) {
    if (celsius <= 0) {
        return "Solid";
    } else if (celsius >= 100) {
        return "Gas";
    } else {
        return "Liquid";
    }
}