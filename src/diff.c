//
// Created by tmiles on 14/10/18.
//

#include "diff.h"

void solve(int Nx, int Nt, double Dx, double Dt, double* f_x0) {
	/**
	 * @param Nx 	number of spacial points
	 * @param Nt 	number of temporal points
	 * @param Dt 	time resolution
	 * @param Dx 	x resolution
	 * @param fx_0 	initial f(x)
	 */
	FILE* eul_out = fopen("diff_outputs/out_waveeqn_EU.csv","w");
	FILE* lax_out = fopen("diff_outputs/out_waveeqn_LW.csv","w");
	fprintf(eul_out, "x,f(x)\n");
	fprintf(lax_out, "x,f(x)\n");

	double **f_eul = (double **) malloc((Nt+1) * sizeof(double*));
	double **f_lax = (double **) malloc((Nt+1) * sizeof(double*));

	for (int i=0; i <= Nt; i++) {
		f_eul[i] = malloc((Nx+2) * sizeof(double));
		f_lax[i] = malloc((Nx+2) * sizeof(double));
	}

	// initialize initial conditions
	for (int i=0; i <= Nx; i++) {
		f_lax[0][i] = f_x0[i];
		f_eul[0][i] = f_x0[i];
	}

	for (int n=1; n <= Nt; n++) {
		for (int i=0; i <= Nx; i++) {
			f_eul[n][i] = euler(n, i, Dx, Dt, f_eul, Nx);
			f_lax[n][i] = lax(n, i, Dx, Dt, f_lax, Nx);

			if (n==Nt) {
				fprintf(eul_out, "%.6f,%.6f\n",i*Dx, f_eul[n][i]);
				fprintf(lax_out, "%.6f,%.6f\n",i*Dx, f_lax[n][i]);
			}

		}
	}

	


	for (int i=0; i < Nt; i++) {
		free(f_eul[i]);
		free(f_lax[i]);
	}
	free(f_eul);
	free(f_lax);

	fclose(eul_out);
	fclose(lax_out);
}

double euler(int n, int i, double Dx, double Dt, double** f, int Nx) {
	double f_i_n;
	double df;

	if (i == 0) {
		df = (f[n-1][0] - f[n-1][Nx]) / Dx;

	} else {
		df = (f[n-1][i] - f[n-1][i-1]) / Dx;
	}

	f_i_n = f[n-1][i] - C * Dt * df;

	return f_i_n;
}

double lax(int n, int i, double Dx, double Dt, double** f, int Nx) {
	double f_i_n;
	double df;
	double d2f;

	// left boundary stencil
	if (i == 0) {
		df = (f[n-1][1] - f[n-1][Nx]) / Dx;
		d2f = (f[n-1][1] - 2*f[n-1][0] + f[n-1][Nx]) / pow(Dx, 2);

	// right boundary stencil
	} else if (i == Nx) {
		df = (f[n-1][0] - f[n-1][Nx-1]) / Dx;
		d2f = (f[n-1][0] - 2*f[n-1][Nx] + f[n-1][Nx-1]) / pow(Dx, 2);

	} else {
		df = (f[n-1][i+1] - f[n-1][i-1]) / Dx;
		d2f = (f[n-1][i+1] - 2*f[n-1][i] + f[n-1][i-1]) / pow(Dx, 2);
	}

	f_i_n = f[n-1][i] - C*Dt / 2.0 * df + pow(C,2) * pow(Dt, 2) / 2.0 * d2f;
	return f_i_n;
}