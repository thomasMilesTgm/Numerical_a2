//
// Created by tmiles on 15/10/18.
//

#ifndef ASSIGNMENT2_UTILITIES_H
#define ASSIGNMENT2_UTILITIES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 4098

char * create_buffer (size_t buffer_size);
FILE* safe_open(const char * filename, const char * mode);

#endif //ASSIGNMENT2_UTILITIES_H
