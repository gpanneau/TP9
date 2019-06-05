#include "Character.h"

Character::Character():speed_(0),max_speed_(10){}

void Character::Accelerate(){/*Velocity setter : increase, if it is possible,
  the velocity of the kart (speed_) by one*/
  if (speed_<max_speed_){/*The velocity of the kart can not be greater than its maximum velocity*/
    speed_++;/*Increse the velocity of the kart by one*/
  }
}

void Character::Break(){/*Velocity setter : decrease, if it is possible, the velocity 
  of the kart (speed_) by one*/
  if (speed_>0){/*The velocity of the kart is a positive number*/
    speed_--;/*Decrease the velocity of the kart by one*/
  }
}
