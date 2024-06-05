#include <stdio.h>

#include "temp_converter.h"

int main()

{

// Define an array of Celsius temperatures

float temp_celsius_array[] = {-5, 22, 105};

// Convert and analyze each temperature

for (int i = 0; i < 3; ++i)

{

float celsius = temp_celsius_array[i];
float fahrenheit = temp_converter_toFahrenheit(celsius);

float kelvin = temp_converter_toKelvin(celsius);

const char *state = temp_converter_determineStateOfWater(celsius);

printf("\nTemperature in Celsius: %.2f\n", celsius);

printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

printf("Temperature in Kelvin: %.2f\n", kelvin);

printf("State of Water: %s\n", state);

}

return 0;
}