#include <iostream>
#include "libnumerixpp/libnumerixpp.hpp"
#include "libnumerixpp/core/common.hpp"
#include "libnumerixpp/physics/core.hpp"
#include "libnumerixpp/physics/kinematics.hpp"

int main() 
{
    credits();
    println("LIBNUMERIXPP");

    double speed = 50.0;
    double time = 12.0;

    double path = physics::kinematics::calculatePath(speed, time);
    speed = physics::kinematics::calculateSpeed(path, time);
    time = physics::kinematics::calculateSpeed(path, speed);

    std::cout << "Calculate: speed=" << speed << "m/s" << "; time=" << time << "s" << "; path=" << path << "m" << std::endl; 

    double finalVelocity = physics::kinematics::calculateFinalVelocity(10.0, 10.0, 10.0);
    std::cout << "final velocity (10.0, 10.0, 10.0) = " << finalVelocity << std::endl;

    double finalPosition = physics::kinematics::calculateFinalPosition(10.0, 10.0, 10.0, 10.0);
    std::cout << "final position (10.0, 10.0, 10.0, 10.0) = " << finalVelocity << std::endl;

    return 0;
}