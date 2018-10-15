/***************************************************************************
 *
 *   File        : main.c
 *   Student Id  : 626263
 *   Name        : Thomas Miles
 *
 ***************************************************************************/

#ifndef TASKS_H

#define B_L0 0      // initial guess for beta_l (deg)
#define B_U0 90     // initial guess for beta_u (deg)


void shockwave(const char* q2_file);

void linalgbsys(const char* q4_file);

void interp(const char* q5_file, const double xo);

void waveeqn(const char* q6_file);

#endif
