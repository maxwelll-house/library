/**
 * @file
 * @brief Physics utils for kinematics
 */
#ifndef LIBNUMERIXPP_PHYSICS_KINEMATICS_HPP
#define LIBNUMERIXPP_PHYSICS_KINEMATICS_HPP

#pragma once

/**
 * @brief      Namespace of kinematics (physics)
 *
 * @todo       Add more kinematics equations
 */
namespace physics::kinematics 
{

    /**
     * @brief      Calculates the path.
     * 
     * This function is based on basic formule: S = v * t
     * where:
     *  + S - path (m)
     *  + v - speed (m/s)
     *  + t - time (s)
     *
     * @param[in]  speed  The speed
     * @param[in]  time   The time
     *
     * @return     The path.
     */
    double calculatePath(double speed, double time);

    /**
     * @brief      Calculates the speed.
     * 
     * This function is based on basic formule: S = v * t
     * where:
     *  + S - path (m)
     *  + v - speed (m/s)
     *  + t - time (s)
     *
     * @param[in]  path  The path
     * @param[in]  time  The time
     *
     * @return     The speed.
     */
    double calculateSpeed(double path, double time);

    /**
     * @brief      Calculates the time.
     * 
     * This function is based on basic formule: S = v * t
     * where:
     *  + S - path (m)
     *  + v - speed (m/s)
     *  + t - time (s)
     *
     * @param[in]  path   The path
     * @param[in]  speed  The speed
     *
     * @return     The time.
     */
    double calculateTime(double path, double speed);

    /**
     * @brief      Calculates the final velocity.
     * 
     * This function is based on the basic kinematics equation: v = u + at
     * where:
     *  + v - final velocity (m/s)
     *  + u - start speed (m/s)
     *  + a - accelaration (m/s^2)
     *  + t - time (s)
     *
     * @param[in]  initial_velocity  The initial velocity
     * @param[in]  acceleration      The acceleration
     * @param[in]  time              The time
     *
     * @return     The final velocity.
     */
    double calculateFinalVelocity(double initial_velocity, double acceleration, double time);

    /**
     * @brief      Calculates the final position.
     *
     * This function is based on the kinematics equation: s = u*t + 0.5 * a * t^2
     * where:
     *  + s - final position (m)
     *  + u - start speed (m/s)
     *  + a - acceleration (m/s^2)
     *  + t - time (s)
     *
     * @param[in]  initial_position  The initial position
     * @param[in]  initial_velocity  The initial velocity
     * @param[in]  acceleration      The acceleration
     * @param[in]  time              The time
     *
     * @return     The final position.
     */
    double calculateFinalPosition(double initial_position, double initial_velocity, double acceleration, double time);
} // physics::kinematics

#endif // LIBNUMERIXPP_PHYSICS_KINEMATICS_HPP