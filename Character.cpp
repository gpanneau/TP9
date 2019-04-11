#include "Character.h"

Character::Character():speed_(0),max_speed_(10){}

void Character::Accelerate(){
  if (speed_<max_speed_){
    speed_++;
  }
}

void Character::Break(){
  if (speed_>0){
    speed_--;
  }
}
