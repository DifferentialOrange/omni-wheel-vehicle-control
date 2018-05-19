#ifndef CONSTANTS_H
#define CONSTANTS_H

static const double rho 	= 3.0 / 2;
static const double Lambda 	= 5.0 / 4;
static const double lambda 	= 1.0 / 3;

static const double A1 		= 1 + 3 * lambda * lambda / 2;
static const double A2 		= 1 + 3 * lambda * lambda / 2;
static const double A3 		= 1 + 3 * rho * rho * lambda * lambda / (Lambda * Lambda);
static const double L 		= 1 / (Lambda * A1); //L1 = L2 == L

static const double c1 		= 1e-2;
static const double c2 		= 2.5e-4;

static const double kappa   = 3 * c2 / (2 * A1); //kappa1 == kappa2 == kappa
static const double kappa3	= 3 * c2 * rho * rho / (Lambda * Lambda * A3);

#endif //CONSTANTS_H