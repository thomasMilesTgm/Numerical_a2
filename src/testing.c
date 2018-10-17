//
// Created by tmiles on 13/10/18.
//

#include "newton_ralphson.h"
#include "tasks.h"
#include "thomas.h"
#include "interp.h"
#include "diff.h"
#include "utilities.h"

int main(int argc, char *argv[]) {


	shockwave("/home/tmiles/Code/Numerical_Programming/A2/data/in_shock.csv");
	linalgbsys("/home/tmiles/Code/Numerical_Programming/A2/data/in_linalsys.csv");
	interp("/home/tmiles/Code/Numerical_Programming/A2/data/in_interp.csv", 5);
	waveeqn("/home/tmiles/Code/Numerical_Programming/A2/data/in_waveeqn.csv");

//	double bl;
//	double bu;
//
//
//	bl = newton_ralphson(0.1, 1.4,  5.0, 20);
//	bu = newton_ralphson(90, 1.4,  5.0, 20);
//
//	printf("_____________\n\nb_l: %f\nb_u: %f\n_____________\n\n", bl,bu);
//
//	double a[6] = {1,4,-9,3,3,3};
//	double b[6] = {-2,5,2,4,2,0};
//	double c[6] = {0,2,2,6,6,-1};
//	double q[6] = {1,2,-3,4,5,1};
//	double *x;
//
//
//	x = thomas(a,b,c,q,6);
//	for (int i=0; i<6;i++) {
//		printf("x = %f\n", x[i]);
//	}
//	free(x);
//	printf("_____________\n\n");
//
//	double x_inter[4] = {0,1,4,9};
//	double y_inter[4] = {0,11,19,19};
//
//	double est = lagrange_estimate(x_inter, y_inter, 4, 5);
//
//	printf("x(5) ~= %.6f\n", est);
//	printf("_____________\n\n");
//
//	double **spl = spline(x_inter, y_inter, 4);
//	double s_est = spline_estimate(spl, x_inter, 5,4);
//
//	printf("x(5) ~= %.6f\n", s_est);
//	printf("_____________\n\n");
//
//	for (int i=0; i<4; i++) {
//		free(spl[i]);
//	}
//	free(spl);
//
//	double xMax=1.0;
//	double tMax=10.0;
//	int Nx = 80;
//	double Dx = xMax/Nx;
//	double CFL = 0.5;
//	double Dt = CFL*Dx/C;
//	int Nt = (int) ((int)tMax / Dt);
//	double * f0 = malloc(sizeof(double) * (Nx+1));
//
//	int it=0;
//	double i = 0;
//	while (i < xMax) {
//		if (i<0.125 || i > 0.375) {
//			f0[it] = 0;
//
//		} else {
//			f0[it] = 0.5*(1 - cos(8*M_PI*(i - 0.125)));
//		}
//		it ++;
//		i+=Dx;
//	}
//
//	solve(Nx, Nt, Dx, Dt, f0);
//
//	free(f0);
}