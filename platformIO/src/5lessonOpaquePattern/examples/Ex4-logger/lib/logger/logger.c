#include "logger.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct logger_s {
    FILE* file;
    char* folder_path;
    char* filename;
};

logger_t logger_create(const char* folder_path, const char* filename) {
    logger_t self = malloc(sizeof(*self));

    self->folder_path =  strdup(folder_path) ; //this method uses the heap. So it should be free'd later. 
    self->filename = strdup(filename); //this method uses the heap. So it should be free'd later. 

    char full_path[1000];
    snprintf(full_path, sizeof(full_path), "%s/%s", self->folder_path, self->filename);
    self->file = fopen(full_path, "a"); // a = append

    return self;
}

void logger_log(logger_t self, const char* message) {
    fprintf(self->file, "%s\n", message);
}

void logger_destroy(logger_t self) {

    fclose(self->file);
    
    free(self->folder_path);
    free(self->filename);
    free(self);
}
