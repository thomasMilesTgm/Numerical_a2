//
// Created by tmiles on 14/10/18.
//

#include "thomas.h"

double *thomas(const double *a, const double *b, const double *c, const double *Q, int N) {

	double *a_prime = malloc(sizeof(double) * N);
	double *Q_prime = malloc(sizeof(double) * N);
	double *x = malloc(sizeof(double) * N);

	a_prime[0] = a[0];
	Q_prime[0] = Q[0];

	for (int i=1; i < N; i++) {
		a_prime[i] = a[i] - c[i]*b[i-1]/a_prime[i-1];
		Q_prime[i] = Q[i] - c[i]*Q_prime[i-1]/a_prime[i-1];
	}
	x[N-1] = Q_prime[N-1]/a_prime[N-1];

	for (int i=N-2; i >= 0; i--) {
		x[i] = (Q_prime[i] - b[i]*x[i+1])/a_prime[i];
	}
	free(a_prime);
	free(Q_prime);


	return x;
}