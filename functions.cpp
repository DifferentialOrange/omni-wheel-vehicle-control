#include "include.h"

double theta(double t, double D3, double W3, double D6)
{
    return (t * W3 - D3 * exp(-kappa3 * t)) / (kappa3 * Lambda) + D6;
}

double beta(double t1, double t, double D3, double W3, double D6)
{
    return (theta(t, D3, W3, D6) - theta(t1, D3, W3, D6)) / A1;
}

double under_gamma_W_c(double t1, double tau, double D3, double W3, double D6)
{
    return exp(kappa * (tau - t1)) * cos(beta(t1, tau, D3, W3, D6));
}

double gamma_W_c(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_gamma_W_c, D3, W3, D6);
}

double under_gamma_W_s(double t1, double tau, double D3, double W3, double D6)
{
    return exp(kappa * (tau - t1)) * sin(beta(t1, tau, D3, W3, D6));
}

double gamma_W_s(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_gamma_W_s, D3, W3, D6);
}

double under_Gamma_D_1(double t1, double tau, double D3, double W3, double D6)
{
    return exp(-kappa * (tau - t1)) * cos(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6));
}

double Gamma_D_1(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_Gamma_D_1, D3, W3, D6);
}

double under_Gamma_D_2(double t1, double tau, double D3, double W3, double D6)
{
    return exp(-kappa * (tau - t1)) * sin(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6));
}

double Gamma_D_2(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_Gamma_D_2, D3, W3, D6);
}

double under_Gamma_W_1(double t1, double tau, double D3, double W3, double D6)
{
    return exp(-kappa * (tau - t1)) * (cos(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6)) * gamma_W_c(t1, tau, D3, W3, D6) 
                + sin(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6)) * gamma_W_s(t1, tau, D3, W3, D6));
}

double Gamma_W_1(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_Gamma_W_1, D3, W3, D6);
}

double under_Gamma_W_2(double t1, double tau, double D3, double W3, double D6)
{
    return exp(-kappa * (tau - t1)) * (cos(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6)) * gamma_W_s(t1, tau, D3, W3, D6) 
                - sin(beta(t1, tau, D3, W3, D6) - theta(tau, D3, W3, D6)) * gamma_W_c(t1, tau, D3, W3, D6));
}

double Gamma_W_2(double t1, double t, double D3, double W3, double D6)
{
    return DOPRI8_par_integrate(t1, t, under_Gamma_W_2, D3, W3, D6);
}

double gamma_s_plus_c(double t1, double t, double D3, double W3, double D6)
{
    return exp(-kappa * t) * (cos(beta(t1, t, D3, W3, D6)) * gamma_W_c(t1, t, D3, W3, D6) + sin(beta(t1, t, D3, W3, D6)) * gamma_W_s(t1, t, D3, W3, D6));
}

double gamma_s_minus_c(double t1, double t, double D3, double W3, double D6)
{
    return exp(-kappa * t) * (-cos(beta(t1, t, D3, W3, D6)) * gamma_W_s(t1, t, D3, W3, D6)
                + sin(beta(t1, t, D3, W3, D6)) * gamma_W_c(t1, t, D3, W3, D6));
}

double u_control_1(double W_control_1, double W_control_2, double W_control_3)
{
    return A1 * W_control_1 / (3 * c1) + A2 * W_control_2 / (sqrt(3) * c1) + Lambda * A3 * W_control_3 / (3 * rho * c1);
}

double u_control_2(double W_control_1, double W_control_2, double W_control_3)
{
    return - 2 * A1 * W_control_1 / (3 * c1) + Lambda * A3 * W_control_3 / (3 * rho * c1);
}

double u_control_3(double W_control_1, double W_control_2, double W_control_3)
{
    return A1 * W_control_1 / (3 * c1) - A2 * W_control_2 / (sqrt(3) * c1) + Lambda * A3 * W_control_3 / (3 * rho * c1);
}

Vector<3> W_control(Vector<3> u_control)
{
    return {c1 * (u_control[0] - 2 * u_control[1] + u_control[2]) / (2 * A1),
            c1 * sqrt(3) * (u_control[0] - u_control[2]) / (2 * A2),
            c1 * rho * (u_control[0] + u_control[1] + u_control[2]) / (Lambda * A3)};
}
