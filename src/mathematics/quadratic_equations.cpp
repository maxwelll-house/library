/**
 * @file
 * @brief Math utils for quadratic
 */
#include <vector>
#include "libnumerixpp/mathematics/core.hpp"

namespace mathematics::quadratic 
{

    double calculateDiscriminant(double a, double b, double c) 
    {
        double d = mathematics::squareItUp(b) - 4 * a * c;

        return d;
    }

    std::vector<double> calculateRootsByDiscriminant(double discriminant, double a, double b) 
    {
        std::vector<double> roots;

        if (discriminant > 0)
        {
            double x1 = (-b + getSquareRoot(discriminant)) / (2 * a);
            double x2 = (-b - getSquareRoot(discriminant)) / (2 * a);

            roots.push_back(x1);
            roots.push_back(x2);
        } 
        else if (discriminant == 0) 
        {
            double x1 = -b + getSquareRoot(discriminant) / (2 * a);
            roots.push_back(x1);
        }
        return roots;
    }
    
    std::vector<double> getRootsByVietaTheorem(double a, double b, double c) 
    {
        std::vector<double> roots;

        if (a == 0)
        {
            return roots;
        }

        double roots_sum = -(b / a);
        double roots_mul = c / a;

        roots.push_back(roots_sum);
        roots.push_back(roots_mul);

        return roots;
    }
} //mathematics::quadratic 