/**
 * @file
 * @brief Core utils for mathematics
 */
#include <math.h>

namespace mathematics 
{
    double oldApproximatePower(double base, double exponent) 
    {
        union 
        {
            double d;
            long long i;
        } u = { base };

        long long magicNum = 4606853616395542500L;

        u.i = (long long)(magicNum + exponent * (u.i - magicNum));

        return u.d;
    }

    double binaryPower(double base, unsigned long long exponent) {
        double v = 1.0;
        
        while(exponent != 0) 
        {
            if((exponent & 1) != 0)
            {
                v *= base;
            }

            base *= base;
            exponent >>= 1;
        }

        return v;
    }

    double fastPowerDividing(double base, double exponent) 
    {
        if(base == 1.0 || exponent == 0.0)
        {
            return 1.0;
        }

        double eAbs = fabs(exponent);
        double el = ceil(eAbs);
        double basePart = oldApproximatePower(base, eAbs / el);
        double result = binaryPower(basePart, (unsigned long long)el);

        if(exponent < 0.0) 
        {
            return 1.0 / result;
        }
        
        return result;
    }

    double anotherApproximatePower(double base, double exponent) 
    {
        union 
        {
            double d;
            int x[2];
        } u = { base };

        u.x[1] = (int)(exponent * (u.x[1] - 1072632447) + 1072632447);
        u.x[0] = 0;

        return u.d;
    }

    double fastPowerFractional(double base, double exponent) 
    {
        if(base == 1.0 || exponent == 0.0)
        {
            return 1.0;
        }

        double absExp = fabs(exponent);
        unsigned long long eIntPart = (long long)absExp;
        double eFractPart = absExp - eIntPart;
        double result = oldApproximatePower(base, eFractPart) * binaryPower(base, eIntPart);

        if(exponent < 0.0)
        {
            return 1.0 / result;
        }

       return result;
    }

    double addPercentToNumber(double number, double percentage) 
    {
        double oneperc = number / 100;
        double result = number + (oneperc * percentage);

        return result;
    }

    double squareItUp(double num) 
    {
        return num * num;
    }

    double getSquareRoot(double num) 
    {
        if (num <= 0)
        {
            return 0;
        }

        int exp = 0;

        num = frexp(num, &exp);

        if (exp & 1) 
        {
            exp--;
            num *= 2;
        }

        double y = (1 + num) / 2;
        double z = 0;

        while (y != z) 
        {
            z = y;
            y = (y + num / y) / 2;
        }

        return ldexp(y, exp / 2);
    }
} // mathematics