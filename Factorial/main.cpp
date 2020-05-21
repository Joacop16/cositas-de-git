#include <iostream>
using namespace std;

int main(){
    int factorial(int);
    cout<< "Ingrese el numero" << endl;
    int fact,n;
    cin >> n;
    
    fact = factorial(n);
    cout<< "El factorial de "<< n << " es "<< fact<<endl;
    
    return 0;
}

int factorial(int n){
    
    if (n == 0){
        return(1);}
    else{
       return(n*factorial(n-1));
}

}
