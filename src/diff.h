//
// Created by tmiles on 14/10/18.
//

#ifndef ASSIGNMENT2_DIFF_H
#define ASSIGNMENT2_DIFF_H

#include <stdlib.h>
#include <stdio.h>
#include "math.h"

#define C 1.0


double euler(int n, int i, double Dx, double Dt, double** f, int Nx);

double lax(int n, int i, double Dx, double Dt, double** f, int Nx);
void solve(int Nx, int Nt, double Dx, double Dt, double* f_x0);

#endif //ASSIGNMENT2_DIFF_H
