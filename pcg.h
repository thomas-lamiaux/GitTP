/**************
 * 
 *  file pcg.h
 *  Created on Wed Mar 15 2023 by
 *  Xiaodong LIU (xiaodong.liu@cnrs.fr)
 * 
 * 
 * 
 *  Copyright (c) 2023 Xiaodong LIU GeM, CNRS UMR6183
 * 
 **************/

#ifndef _pcg_h
#define _pcg_h
#include <iostream>
#include <vector>
using namespace std;
/// @brief pcg solvor 
/// @param A stiffness matrix
/// @param b right hand vector
/// @param max_iter NB of max iterations
/// @param tol convergence criteria 
/// @return 
vector<double> pcg_solver(const vector<vector<double>>& A, const vector<double>& b, int max_iter, double tol);


#endif