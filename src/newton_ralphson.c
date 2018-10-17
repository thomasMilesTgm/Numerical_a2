//
// Created by tmiles on 12/10/18.
//

#include "newton_ralphson.h"

void read_csv(int row, int col, char *filename, double **data){
	FILE *file;
	file = fopen(filename, "r");
	char* ptr;

	int i = 0;
	char line[BUFFER_SIZE];
	while (fgets(line, BUFFER_SIZE, file) && (i < row))
	{
		char* tmp = strdup(line);

		int j = 0;
		const char* tok;
		for (tok = strtok(line, "\t"); tok && *tok; j++, tok = strtok(NULL, "\t\n"))
		{
			data[i][j] = strtod(tok,  &ptr);
			printf("%f\t", data[i][j]);
		}
		printf("\n");

		free(tmp);
		i++;
	}
}

double to_rad(double angle) {
	return angle*2*M_PI/360.0;
}

double to_deg(double angle) {
	return angle*360.0/(2*M_PI);
}

double f_beta(double beta, double gamma, double M, double theta) {
	/**
	 * 	computes f(b)
	 */
	beta = to_rad(beta);
	theta = to_rad(theta);

	double f_b = 2.0 * (cos(beta)/sin(beta)) * (pow(M, 2) * pow(sin(beta),2)-1) / (pow(M, 2) * (gamma+cos(2*beta)) + 2)
	             - tan(theta);

	return f_b;

}

double df_dbeta (double beta, double gamma, double M) {
	/**
	 * 	computes f'(b)
	 */
	beta = to_rad(beta);



	return (4 * pow(M,2) * cos(beta) * sin(beta) * (pow(M,2)*pow(sin(beta),2)-1) * sin(2*beta) + (pow(sin(beta),2)
	       * (4 * pow(M,2) * pow(cos(beta),2) - 2 * (pow(M,2) * pow(sin(beta),2)-1)) - 2 * pow(cos(beta),2) * (pow(M,2)
	       * pow(sin(beta),2) - 1)) * (pow(M,2) * (cos(2*beta)+gamma) + 2)) / (pow(sin(beta),2)
	       * pow((pow(M,2) * (cos(2*beta) + gamma) + 2), 2));
}

double newton_ralphson(double beta, double gamma, double M, double theta) {
	/**
	 * Recursive function to solve for zeros
	 */

	if (theta == 0) {
		return asin(1.0 / M);
	}

	double beta_n;      // tangent roots
	double f_b = f_beta(beta, gamma, M, theta);



	if (f_b < CUTOFF && f_b > -CUTOFF) {
		return beta;
	}

	beta_n = beta - f_b/df_dbeta(beta, gamma, M);

	return newton_ralphson(beta_n, gamma, M, theta);
}