//
// Created by tmiles on 12/10/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "tasks.h"

int main(int argc, char *argv[]) {

	char* M = "1.5";
	char* theta = "5";
	char* gamma = "1.4";
	char* cot = "(cos(x)/sin(x))";
	char* sin2 = "sin(x)*sin(x)";
	char* M2 = ""M"*"M;

	char* f_b = "2*"cot"*"M2"*("sin2"-1)/("M2"*("gamma"+cos(2*x)+2)-tan("theta")))";

	system("gnuplot plot "f_b);
	return (EXIT_SUCCESS);
}
