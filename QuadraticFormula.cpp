

//
//  main.cpp
//  Quadratic Formula
//
//  Created by Morgan Walker on 5/26/15.
//  Copyright (c) 2015 MW. All rights reserved.
//

//#include "QuadraticFormula.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main()
{
    //initialize variables
    double a, b, c;
    
    //prompt for input
    cout << "Enter a, b, c: " << endl;
    
    //save input
    cin >> a >> b >> c;
    
    //calculate discriminant
    double discrim = b * b - 4 * a * c;
    
    //
    if(discrim < 0)
    {
        cout << "The equation has no real roots" << endl;
    }
    else if(discrim > 0)
    {
        double r1 = (-b + sqrt(discrim)) / (2 * a);
        double r2 = (-b - sqrt(discrim)) / (2 * a);
        
        cout << "The equation has two roots "  << r1 << " and " << r2 << endl;
    }
    else // if(discrim == 0)
    {
        double r = -b / (2 * a);
        
        cout << "The equation has one root " << r << endl;
    }
    return 0;
}


