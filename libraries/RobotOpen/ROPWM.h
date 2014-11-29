#ifndef ROPWM_h
#define ROPWM_h

#include <RobotOpen.h>


class ROPWM
{
  public:
    ROPWM(uint8_t);

    void write(byte);
    
    void attach();
    void detach();
    
  private:
    uint8_t _channel;
    bool _attached;
};



#endif