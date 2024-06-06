#pragma once

typedef struct logger_s *logger_t;

// Create a new logger instance
// The logger will create or append to a file in the specified folder with the given filename.
logger_t logger_create(const char* folder_path, const char* filename);

// Log a message
void logger_log(logger_t self, const char* message);

// Destroy the logger instance
void logger_destroy(logger_t self);

