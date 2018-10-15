//
// Created by tmiles on 13/10/18.
//

#include "utils_2.h"
#include "tasks.h"

int main(int argc, char *argv[]) {

	double bl;
	double bu;


	bl = newton_ralphson(0.1, 1.4,  5.0, 20);
	bu = newton_ralphson(90, 1.4,  5.0, 20);

	printf("b_l: %f\nb_u: %f\n", bl,bu);

}