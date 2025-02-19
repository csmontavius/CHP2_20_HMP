/*
Program: How much paint 2
Programmer: Montavius Spratley Burford
Date: 2/9/2025
Requirments: Use your previous program from Exercise 20 and 
revise it so that the user can enter the size of the fence.
The revised program should be pushed 
to a new branch of the project from Exercise 20
*/

#include <iostream>
#include <cmath>

int main() {
    double fenceHeight, fenceLength;
    const double coveragePerGallon = 340.0; // square feet per gallon

    std::cout << "Enter the height of the fence (in feet): ";
    std::cin >> fenceHeight;
    std::cout << "Enter the length of the fence (in feet): ";
    std::cin >> fenceLength;

    double totalArea = 2 * fenceHeight * fenceLength * 2; // 2 coats
    int gallonsNeeded = std::ceil(totalArea / coveragePerGallon);

    std::cout << "You will need approximately " << gallonsNeeded << " gallons of paint." << std::endl;

    return 0;
}
