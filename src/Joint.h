
#ifndef JOINT_H
#define JOINT_H

class Joint
{
public:
    Joint( float angleIn, angleMinIn, angleMaxIn, angleMaxAccelIn );
    virtual ~Joint {}


private:
    float angle;
    float angleVel;
    float angleAccel;
    float angleMin;
    float angleMax;

    float angleMaxAccel;

};

#endif // JOINT_H
