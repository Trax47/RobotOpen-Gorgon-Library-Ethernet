#ifndef ROSolenoid_h
#define ROSolenoid_h

#include "RobotOpenGE.h"


class ROSolenoid
{
  public:
    ROSolenoid(uint8_t);

    void on();
    void off();
    
  private:
    uint8_t _channel;
};



#endif