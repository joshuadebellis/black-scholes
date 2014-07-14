//
//  main.cpp
//  black-scholes
//
//  Created by Joshua on 7/6/14.
//  Copyright (c) 2014 Joshua. All rights reserved.
//

#include <iostream>
#include "blackscholes.h"
using namespace std ;



int main(int argc, const char * argv[])
{
    
    double S = 100.0;  // Option price
    double K = 100.0;  // Strike price
    double r = 0.05;   // Risk-free rate (5%)
    double v = 0.2;    // Volatility of the underlying (20%)
    double T = 1.0;    // One year until expiry
    double t = 0 ;

    black_scholes optionprice ;
    
    vector<double> parameters = optionprice.variable_calculation(v,T,t,S,K,r) ;
    
  
 

double N_1 = optionprice.normalCFD( parameters[0]) ;
double N_2 = optionprice.normalCFD( parameters[1]) ;
    
double result = optionprice.call_price(S,K,T,t,N_1,N_2,r) ;
    cout << "The value of the call option RIGHT NOW is: $" << result << endl ;
    
    return 0 ;
    
    
    
    
    
    
    
}

