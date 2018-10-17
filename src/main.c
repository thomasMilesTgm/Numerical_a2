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

int main(int argc, char *argv[]) {

	char *ptr;
	char* q2_file = NULL;
	char* q4_file = NULL;
	char* q5_file = NULL;
	double xo;
	char* q6_file = NULL;
// parse command line input
	if (argc != 6) {
		printf("ERROR: not enough input arguments\n");
		exit(EXIT_FAILURE);

	} else {
		q2_file = argv[1];
		q4_file = argv[2];
		q5_file = argv[3];
		xo = strtod(argv[4], &ptr);
		q6_file = argv[5];
	}



	struct timeval start;
	struct timeval stop;

	gettimeofday(&start, NULL);
	/* Question 2 */
	shockwave(q2_file);

	gettimeofday(&stop, NULL);

	double elapsed_ms = (stop.tv_sec - start.tv_sec) * 1000.0;
	elapsed_ms += (stop.tv_usec - start.tv_usec) / 1000.0;

	printf("shockwave:  %.2f milliseconds\n", elapsed_ms);

	gettimeofday(&start, NULL);

	/* Question 4 */
	linalgbsys(q4_file);

	gettimeofday(&stop, NULL);
	elapsed_ms = (stop.tv_sec - start.tv_sec) * 1000.0;
	elapsed_ms += (stop.tv_usec - start.tv_usec) / 1000.0;
	printf("linalgbsys:  %.2f milliseconds\n", elapsed_ms);

	gettimeofday(&start, NULL);
	/* Question 5 */
	interp(q5_file,xo);


	gettimeofday(&stop, NULL);
	elapsed_ms = (stop.tv_sec - start.tv_sec) * 1000.0;
	elapsed_ms += (stop.tv_usec - start.tv_usec) / 1000.0;
	printf("interp:  %.2f milliseconds\n", elapsed_ms);


	gettimeofday(&start, NULL);
	/* Question 6 */
	waveeqn(q6_file);

	gettimeofday(&stop, NULL);
	elapsed_ms = (stop.tv_sec - start.tv_sec) * 1000.0;
	elapsed_ms += (stop.tv_usec - start.tv_usec) / 1000.0;
	printf("waveeqn:  %.2f milliseconds\n", elapsed_ms);
    
	return (EXIT_SUCCESS);
}
