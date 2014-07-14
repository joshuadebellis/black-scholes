//
//  blackscholes.h
//  black-scholes
//
//  Created by Joshua on 7/6/14.
//  Copyright (c) 2014 Joshua. All rights reserved.
//

#ifndef __black_scholes__blackscholes__
#define __black_scholes__blackscholes__
#include <vector>

class black_scholes{
public:
    std::vector<double> variable_calculation(double sigma , double maturity, double time, double spot, double strike, double r ) ;
    double normalCFD(double value);
    double call_price(double spot, double strike, double maturity, double time, double n1, double n2, double r) ;
    };


#endif /* defined(__black_scholes__blackscholes__) */
