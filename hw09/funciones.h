#include <iostream>
using namespace std;

double fprima(double t, double vo);
double * Rungekutta4(double t, double dt, double y, double vo);

double fprima(double t, double vo){
    double g = -9.8;
    return vo + g*t;
}

double * Rungekutta4(double t, double dt, double y, double vo){
    double k1 = fprima(t, vo);
    double k2 = fprima(t + dt/2, vo + k1/2);
    double k3 = fprima(t + dt/2, vo + k2/2);
    double k4 = fprima(t + dt, vo + k3);
        
    double * coord = new double[2];
    coord[0] = t +dt;
    coord[1] = y + (k1 + 2*k2 + 2*k3 + k4)/6;
    
    return coord;
}