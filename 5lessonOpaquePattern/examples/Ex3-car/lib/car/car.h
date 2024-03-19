typedef struct car_s * car_t;

car_t car_create(const char * brand,const char * model, int horse_power, double fuel_capacity, double current_fuel, double fuel_efficientcy);

char * car_get_brand(car_t self);

char * car_get_model(car_t self);

int car_get_horsepower(car_t self);

double car_get_fuel_capacity(car_t self);

double car_get_curret_fuel(car_t self);

double car_get_fuel_Efficientcy(car_t self);

double car_distance2empty(car_t self);

void car_print_info(car_t self);

void car_boost_horsepower(car_t self, int increased_hp);

void car_destroy(car_t self);