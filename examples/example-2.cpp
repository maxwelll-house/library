#include <iostream>
#include <vector>
#include "libnumerixpp/libnumerixpp.hpp"
#include "libnumerixpp/core/common.hpp"
#include "libnumerixpp/mathematics/core.hpp"
#include "libnumerixpp/mathematics/quadratic_equations.hpp"

int main() 
{
    credits();
    println("LIBNUMERIXPP");

    // SQUARE AND SQR //

    double num = 100.0;
    double num_sq = mathematics::squareItUp(num);
    double num_sqr = mathematics::getSquareRoot(num);
    std::cout << "Square " << num << ": " << num_sq << std::endl;
    std::cout << "Square root " << num << ": " << num_sqr << std::endl;

    std::cout << std::endl;

    // CALCULATE QUADRATIC EQUATION BY DISCRIMINANT //

    double a = -2;
    double b = 5;
    double c = 5;

    double d = mathematics::quadratic::calculateDiscriminant(a, b, c);
    std::vector<double> roots = mathematics::quadratic::calculateRootsByDiscriminant(d, a, b);

    std::cout << "Quadratic Equation: a=" << a << "; b=" << b << "; c=" << c << std::endl;
    std::cout << "D=" << d << std::endl;
    std::cout << "Roots:" << std::endl;

    for (double root : roots) 
    {
        std::cout << root << std::endl;
    }

    std::cout << std::endl;

    // PERCENTAGE //

    double nump = mathematics::addPercentToNumber(100.0, 10.0);
    std::cout << "100+10%: " << nump << std::endl;

    std::cout << std::endl;
 
    // POWER / Algorithms for fast exponentiation //

    double bestPowVal = 100;
    double pow_results[5] = 
    {
        mathematics::oldApproximatePower(10.0, 2.0),
        mathematics::anotherApproximatePower(10.0, 2.0),
        mathematics::binaryPower(10.0, 2),
        mathematics::fastPowerDividing(10.0, 2.0),
        mathematics::fastPowerFractional(10.0, 2.0)
    };

    std::cout << "0 oldApproximatePower    : base 10 exponent 2: " << pow_results[0] << std::endl;
    std::cout << "1 anotherApproximatePower: base 10 exponent 2: " << pow_results[1] << std::endl;
    std::cout << "2 binaryPower            : base 10 exponent 2: " << pow_results[2] << std::endl;
    std::cout << "3 fastPowerDividing      : base 10 exponent 2: " << pow_results[3] << std::endl;
    std::cout << "4 fastPowerFractional    : base 10 exponent 2: " << pow_results[4] << std::endl;

    for (int i = 0; i < sizeof(pow_results) / sizeof(pow_results[0]); ++i) 
    {
        double error = bestPowVal - pow_results[i];

        std::cout << "POW Algorithm #" << i << ": error=" << error << std::endl;
    }

    return 0;
}