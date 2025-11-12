/**
 * @file
 * @brief Quadratic utils for mathematics
 */
#ifndef LIBNUMERIXPP_MATHEMATICS_QUADRATIC_EQUATIONS_HPP
#define LIBNUMERIXPP_MATHEMATICS_QUADRATIC_EQUATIONS_HPP

#pragma once

#include <vector>
#include "libnumerixpp/mathematics/core.hpp"

/**
 * mathematics utils for quadratic equations and other
 *
 * @include example-2.cpp
 */
namespace mathematics::quadratic 
{
    /**
     * @brief      Calculates the discriminant.
     *
     * @details    Based on discriminant formula: \f$b^{2} - 4ac\f$
     *
     * @param[in]  a     a
     * @param[in]  b     b
     * @param[in]  c     c
     *
     * @return     The discriminant.
     */
    double calculateDiscriminant(double a, double b, double c);

    /**
     * @brief      Calculates the roots by discriminant.
     *
     * @details    Calculate the roots by discriminant \f$\frac{-b +-
     *             \sqrt{D}}{2a}\f$. D > 0 = 2 roots, D == 0 = 1 root, D < 0 = 0
     *             roots.
     *
     * @param[in]  discriminant  The discriminant
     * @param[in]  a             a
     * @param[in]  b             b
     *
     * @return     The roots by discriminant.
     */
    std::vector<double> calculateRootsByDiscriminant(double discriminant, double a, double b);

    /**
     * @brief      Gets the roots by vieta theorem.
     *
     * @param[in]  a     a
     * @param[in]  b     b
     * @param[in]  c     c
     *
     * @return     The roots by vieta theorem.
     */
    std::vector<double> getRootsByVietaTheorem(double a, double b, double c);
} // mathematics::quadratic 

#endif // LIBNUMERIXPP_MATHEMATICS_QUADRATIC_EQUATIONS_HPP