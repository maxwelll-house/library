/**
 * @file
 * @brief Physics utils for kinematics

 */
#include "libnumerixpp/physics/core.hpp"

namespace physics::kinematics 
{

    double calculatePath(double speed, double time) 
    {
        return speed * time;
    }

    double calculateSpeed(double path, double time) 
    {
        return path / time;
    }

    double calculateTime(double path, double speed) 
    {
        return path / speed;
    }

    double calculateFinalVelocity(double initial_velocity, double acceleration, double time) 
    {
        return initial_velocity + acceleration * time;
    }

    double calculateFinalPosition(double initial_position, double initial_velocity, double acceleration, double time) 
    {
        return initial_position + initial_velocity * time + 0.5 * acceleration * time * time;
    }
} // physics::kinematics