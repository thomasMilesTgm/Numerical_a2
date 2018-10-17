/***************************************************************************
 *
 *   File        : main.c
 *   Student Id  : 626263
 *   Name        : Thomas Miles
 *
 ***************************************************************************/

#ifndef TASKS_H

#define B_L0 1     // initial guess for beta_l (deg)
#define B_U0 90     // initial guess for beta_u (deg)
#define THETA_MAX 10
#define THETA_MIN 1
#define THETA_STEP 1

void shockwave(const char* q2_file);

void linalgbsys(const char* q4_file);

void interp(const char* q5_file, const double xo);

void waveeqn(const char* q6_file);

#endif
