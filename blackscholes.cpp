//
//  blackscholes.cpp
//  black-scholes
//
//  Created by Joshua on 7/6/14.
//  Copyright (c) 2014 Joshua. All rights reserved.
//

#include "blackscholes.h"
#include <iostream>
#include <random>
#include <cmath>
using namespace std ;






vector<double> black_scholes::variable_calculation(double sigma , double maturity, double time, double spot, double strike, double r ){
    
        double d_1 = 1/(sigma * sqrt(maturity-time))*(log(spot / strike) + (r + (sigma * sigma )/2)*(maturity-time)) ;
        
        double d_2 = d_1 - sigma *sqrt(maturity-time);
        
    vector<double> result =  {d_1, d_2};
    return result ;
    
}
    

        
        
        
        
    double black_scholes::normalCFD(double value)
    {
        return 0.5 * erfc(-value * M_SQRT1_2);
    }
    
    double black_scholes::call_price(double spot, double strike, double maturity, double time, double n1, double n2,double r){
        
        double price = spot * n1 - strike*exp(-r*maturity)*n2 ;
        return price ;
    }
   
        


