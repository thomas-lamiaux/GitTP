#include "pcg.h"


int main() 
{
    // stiffness matrix
    vector<vector<double>> A = {{4.0, 1.0}, {1.0, 3.0}};
    // right hand vector
    vector<double> b = {1.0, 2.0};
    // max pcg iterations
    int max_iter = 1000;
    // convergence criteria
    double tol = 1e-6;
    // solve the problem 
    vector<double> x = pcg_solver(A, b, max_iter, tol);
    // output in screen 
    for (int i = 0; i < x.size(); ++i) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    
    return 0;
}
