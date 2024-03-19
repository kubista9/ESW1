#include "logger.h"

int main(){

logger_t myLogger = logger_create("C:/Users/Laurits/Desktop", "myFile.txt");

logger_log(myLogger, "This is an important message!");

logger_destroy(myLogger);

}