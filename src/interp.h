//
// Created by tmiles on 14/10/18.
//

#ifndef ASSIGNMENT2_INTERP_H
#define ASSIGNMENT2_INTERP_H

#include <stdlib.h>
#include <stdio.h>
#include "math.h"
double lagrange_estimate(const double *x, const double *f_x, int n, double x_est);
double **spline(const double *x, const double *f_x, int n);
double spline_estimate(double **function, double *intervals, double value, int n);
double h(const double *x, int i);
void save(double** spline_eqns, double* intervals, int n, double max, double step, double* fx_);

#endif //ASSIGNMENT2_INTERP_H
