//
// Created by tmiles on 14/10/18.
//


#include "interp.h"
#include "thomas.h"

double lagrange_estimate(const double *x, const double *f_x, int n, double x_est) {
	double p_est = 0;
	double p_j = 0;

	for (int j=0; j < n; j++) {
		for (int k=0; k < n;k++) {

			if (k != j) {
				if (k == 0) {
					p_j = (x_est - x[k]) / (x[j] - x[k]);

				} else {
					p_j *= (x_est - x[k]) / (x[j] - x[k]);
				}
			}
		}
		p_est += f_x[j] * p_j;
	}
	return p_est;
}


double **spline(const double *x, const double *f_x, int n) {

	double *a = (double*) malloc(sizeof(double) * n);
	double *b = (double*) malloc(sizeof(double) * n);
	double *d = (double*) malloc(sizeof(double) * n);
	double **splines = (double**) malloc(sizeof(double*) * 4);

	double *A_V = (double*) malloc(sizeof(double) * n);
	double *B_V = (double*) malloc(sizeof(double) * n);
	double *C_V = (double*) malloc(sizeof(double) * n);
	double *D_V = (double*) malloc(sizeof(double) * n);

	A_V[0] = 1;
	A_V[n-1] = 1;

	B_V[0] = 0;
	B_V[n-1] = 0;

	C_V[0] = 0;
	C_V[n-1] = 0;

	D_V[0] = 0;
	D_V[n-1] = 0;

	for (int i=0; i <= n-1; i++) {
		a[i] = f_x[i];
	}

	for (int i=1; i <= n-2;i++) {



		A_V[i] = 2*(h(x,i) + h(x,i-1));
		B_V[i] = h(x,i);
		C_V[i] = h(x,i-1);
		D_V[i] = 3.0*(a[i+1] - a[i]) / h(x,i) + 3.0*(a[i-1] - a[i])/h(x,i-1);
	}




	double *c = thomas(A_V, B_V, C_V, D_V, n);

	for (int i=0; i < n; i++) {


		b[i] = 1.0 / h(x, i) * (a[i+1] - a[i]) - h(x, i) / 3.0 * (2*c[i] + c[i+1]);
		d[i] = (c[i+1] - c[i]) / (3.0*h(x, i));
	}

	splines[0] = a;
	splines[1] = b;
	splines[2] = c;
	splines[3] = d;

	return splines;
}

double spline_estimate(double **function, double *intervals, double value, int n) {
	int i=0;
	while (i < n && value > intervals[i+1]) {
		i++;
	}
	return  function[0][i] +                                // a(i)
			function[1][i]*(value - intervals[i]) +         // b(i)
			function[2][i]*pow(value - intervals[i], 2) +   // c(i)
			function[3][i]*pow(value - intervals[i], 3);    // d(i)

}

double h(const double *x, int i) {
	return x[i+1] - x[i];
}

void save(double** spline_eqns, double* intervals, int n, double max, double step, double* fx_) {

	FILE* out_s = fopen("splines.csv", "w");
	FILE* out_l = fopen("lagrange.csv", "w");
	double x = 0;
	double fx=0;

	fprintf(out_s, "x,f(x)\n");
	fprintf(out_l, "x,f(x)\n");
	while (x < max) {

		fx = spline_estimate(spline_eqns, intervals, x, n);
		double fx_l = lagrange_estimate(intervals, fx_, n, x);
		fprintf(out_s, "%.6f,%.6f\n", x, fx);
		fprintf(out_l,"%.6f,%.6f\n", x, fx_l);
		x += step;
	}


}