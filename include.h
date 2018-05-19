#ifndef INCLUDE_H
#define INCLUDE_H

#include <cmath>
#include <functional>
#include <cstdio>
#include <iostream>
#include <random>
#include <algorithm>

#include <gsl/gsl_linalg.h>

#include "vector.h"
#include "constants.h"
#include "functions.h"

double DOPRI8_par_integrate(double t_left, double t_right, std::function<double(double, double, double, double, double)>, 
                            double D3, double W3, double D6);
Vector<6> predict_control(double t_sw, double T, double nu_1_0, double nu_1_T, double nu_2_0, double nu_2_T, double nu_3_0, double nu_3_T, 
                            double x_T, double y_T, double theta_T);
#endif
