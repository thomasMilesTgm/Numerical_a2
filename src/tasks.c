/***************************************************************************
 *
 *   File        : main.c
 *   Student Id  : 626263
 *   Name        : Thomas Miles
 *
 ***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <string.h>
#include "tasks.h"
#include "newton_ralphson.h"
#include "utilities.h"
#include "thomas.h"
#include "interp.h"
#include "diff.h"

void shockwave(const char* q2_file)
{
	FILE* b_out = fopen("b_out.csv", "w");
	FILE* out_shock = fopen("out_shock.csv", "w");

	double beta_l0=0;
	double beta_u0=0;

	double beta_l=0;
	double beta_u=0;
	double M_a=0;
	double gamma=0;
	double theta=0;

	double M_b=0;
	double theta_b=0;
	int theta_c=1;
	int len_mc=0;
	double *M_c = malloc(sizeof(double)*2);


	FILE* input = safe_open(q2_file, "r");
	char* buffer = create_buffer(BUFFER_SIZE);
	char* ptr;
	int line=0;


	while (fgets(buffer, BUFFER_SIZE, input)) {
		if (line == 0) {
			strtok(buffer, ",");

		} else if (line == 1) {
			M_a = strtod(strtok(buffer, ","), &ptr);
			theta = strtod(strtok(NULL, ","), &ptr);
			beta_l0 = strtod(strtok(NULL, ","), &ptr);
			beta_u0 = strtod(strtok(NULL, ","), &ptr);
			gamma = strtod(strtok(NULL, ","), &ptr);

		} else if (line == 3) {
			M_b = strtod(strtok(buffer, ","), &ptr);

		} else if (line >= 5) {

			len_mc++;
			M_c = (double*) realloc(M_c, (line - 4) * sizeof(double));
			M_c[line - 5] = strtod(strtok(buffer, ","), &ptr);
		}
		line++;
	}
	// PART (a)
	beta_l = newton_ralphson(beta_l0, gamma, M_a, theta);
	beta_u = newton_ralphson(beta_u0, gamma, M_a, theta);

	// PART (b)
	theta_b = 1;
	fprintf(b_out, "theta,b_l,b_u\n");

	double theta_max = THETA_MAX * M_b;



	while ( theta_b < theta_max) {

		beta_l = newton_ralphson(1, gamma, M_b, theta_b);
		beta_u = newton_ralphson(90, gamma, M_b, theta_b);

		fprintf(b_out, "%f,%f,%f\n", theta_b, beta_l, beta_u);
		theta_b+=THETA_STEP;
	}

	fprintf(out_shock, "M,theta,beta_lower,beta_upper\n");

	int i=0;
	while (i < len_mc) {

		theta_max = THETA_MAX*M_c[i];
		while (theta_c < theta_max) {
			beta_l = newton_ralphson(1, gamma, M_c[i], theta_c);
			beta_u = newton_ralphson(90, gamma, M_c[i], theta_c);

			if( beta_l < 90 && beta_l > 0 && beta_u < 90 && beta_u > 0) {
				fprintf(out_shock, "%f,%d,%f,%f\n", M_c[i],theta_c, beta_l, beta_u);

			}
			theta_c ++;
		}
		theta_c = THETA_MIN;
		i++;
	}

	// Free memory

	free(M_c);


}

void linalgbsys(const char* q4_file)
{
	double *a = malloc(sizeof(double));
	double *b = malloc(sizeof(double));
	double *c = malloc(sizeof(double));
	double *q = malloc(sizeof(double));
	double * x;

	FILE* input = safe_open(q4_file, "r");
	FILE* out = safe_open("out_linalsys.csv", "w");

	char* buffer = create_buffer(BUFFER_SIZE);
	char* ptr;
	int line=0;


	while (fgets(buffer, BUFFER_SIZE, input)) {
		if (line == 0) {
			strtok(buffer, ",");

		} else {
			a = realloc(a, line * sizeof(double));
			b = realloc(b, line * sizeof(double));
			c = realloc(c, line * sizeof(double));
			q = realloc(q, line * sizeof(double));

			a[line-1] = strtod(strtok(buffer, ","), &ptr);
			b[line-1] = strtod(strtok(NULL, ","), &ptr);
			c[line-1] = strtod(strtok(NULL, ","), &ptr);
			q[line-1] = strtod(strtok(NULL, ","), &ptr);

		}
		line++;
	}

	x = thomas(a,b,c,q,line-1);
	fprintf(out,"x\n");
	for (int i=0; i < line; i++) {
		fprintf(out, "%f\n",x[i]);
	}

}

void interp(const char* q5_file, const double xo)
{

	double *x = malloc(sizeof(double));
	double *fx = malloc(sizeof(double));

	double **spline_eqn;

	FILE* input = safe_open(q5_file, "r");
	FILE* out = safe_open("out_interp.csv", "w");

	char* buffer = create_buffer(BUFFER_SIZE);
	char* ptr;
	int line=0;


	while (fgets(buffer, BUFFER_SIZE, input)) {
		if (line == 0) {
			strtok(buffer, ",");

		} else {
			x = realloc(x, line * sizeof(double));
			fx = realloc(fx, line * sizeof(double));


			x[line-1] = strtod(strtok(buffer, ","), &ptr);
			fx[line-1] = strtod(strtok(NULL, ","), &ptr);

		}
		line++;
	}
	line --;


	double lest = lagrange_estimate(x, fx, line, xo);
	spline_eqn = spline(x,fx,line);
	double sest = spline_estimate(spline_eqn, x, xo, line);


	save(spline_eqn, x, line, x[line-1], 0.1, fx);

	fprintf(out, "lagrange\n%.6f\ncubic\n%.6f\n", lest, sest);
}

void waveeqn(const char* q6_file)
{
	double c=0;
	int Nx=0;
	double CFL=0;
	int out_iter=0;

	FILE* input = safe_open(q6_file, "r");
	FILE* out = safe_open("out_interp.csv", "w");

	char* buffer = create_buffer(BUFFER_SIZE);
	char* ptr;
	int line=0;


	while (fgets(buffer, BUFFER_SIZE, input)) {
		if (line == 0) {
			strtok(buffer, ",");

		} else {

			c = strtod(strtok(buffer, ","), &ptr);
			Nx = (int) strtod(strtok(NULL, ","), &ptr);
			CFL = strtod(strtok(NULL, ","), &ptr);
			out_iter = (int) strtod(strtok(NULL, ","), &ptr);
		}
		line++;
	}
	int Nt = out_iter;
	double Dx = 1.0/Nx;
	double Dt = CFL*Dx/c;
	double f_x0[Nx];

	// initialize f(x,t=0)
	for (int i=0; i<Nx; i++) {
		double x = i*Dx;

		if (x < 0.125 || x > 0.375) {
			f_x0[i] = 0;

		} else {
			f_x0[i] = 0.5*(1 - cos(8*M_PI*(x - 0.125)));
		}
	}
	solve(Nx, Nt, Dx, Dt, f_x0);
}
