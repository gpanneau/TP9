#include <iostream>
#include "Yoshi.h"
#include "Character.h"

std::string Yoshi::WhatAmI() const{
  return std::to_string(NbrOfCrests_)+" crested Yoshi";
}

Yoshi::Yoshi(int NumberOfCrests):Character(),NbrOfCrests_(NumberOfCrests){}

void Yoshi::Accelerate(){
  if (speed_<max_speed_){
    speed_=speed_+2;
  }
}
