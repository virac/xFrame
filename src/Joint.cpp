
#include "Joint.h"

Joint::Joint( float angleIn, angleMinIn, angleMaxIn, angleMaxAccelIn )
{
    angle = angleIn;
    angleMin = angleMinIn;
    angleMax = angleMaxIn;
    angleMaxAccel = angleMaxAccelIn;
}
