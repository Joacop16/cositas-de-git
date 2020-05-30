#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    double t = 0;
    double dt = 0.001;
    double y = 8.5;
    double vo = 20;
    
    double * coord = new double[2];
    
    coord[0] = t;
    coord[1] = y;
    
    for(;coord[1]>0;){
        
        cout << coord[0] <<" " << coord[1] << endl;
        
        coord = Rungekutta4(coord[0], dt, coord[1], vo);
    }
}