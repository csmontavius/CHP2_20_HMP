/*
Program: How much paint
Programmer: Montavius Spratley Burford
Date: 2/9/2025
Requirments: Write a program to determine and report approximately how much pain will be 
needed to paint two coats on a wooden fence that is 6 feet high, 100 feet long, and 100 feet wide.
*/

#include <iostream>
#include<cmath>

int main()
{
    const double fenceHeight = 6.0; 
    const double fenceLength = 100.0;

    
    const double coveragePerGallon = 340.0; 

    
    double totalArea = 2 * fenceHeight * fenceLength * 2; 

    int gallonsNeeded = std::ceil(totalArea / coveragePerGallon);

    std::cout << "You will need approximately " << gallonsNeeded << " gallons of paint." << std::endl;

    return 0;
}