//
// Created by tmiles on 12/10/18.
//

#ifndef A2_UTILS_2_H
#define A2_UTILS_2_H

#include "math.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4098
#define M_PI 3.14159365
#define CUTOFF 0.000000000001
void read_csv(int row, int col, char *filename, double **data);
double to_rad(double angle);
double to_deg(double angle);
double f_beta(double beta, double gamma, double M, double theta);
double df_dbeta (double beta, double gamma, double M);
double newton_ralphson(double beta, double gamma, double M, double theta);

#endif //A2_UTILS_2_H
