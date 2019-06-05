#ifndef CHARACTER_
#define CHARACTER_

#include <iostream>

class Character{ /*mother class (abstract class)*/
  protected:
    float speed_; /*Velocity of the kart*/
    float max_speed_; /*Maximum velocity of the kart*/
  public:
    Character(); /*Character Constructor*/
    ~Character()=default; /*Character Destructor*/
    virtual void Accelerate(); /*Velocity setter : increase, if it is possible,
    the velocity of the kart (speed_) by one*/
    void Break(); /*Velocity setter : decrease, if it is possible, the velocity 
    of the kart (speed_) by one*/
    inline float speed() const; /*Velocity getter : return the velocity of the kart (speed_)*/
    virtual std::string WhatAmI() const = 0; /*Pure virtual methods,
    if overrated return the character identity*/
};

inline float Character::speed() const{ /*Velocity getter : return the velocity of the kart (speed_)*/
  return speed_;
}

#endif //CHARACTER_
