#include <iostream>
#include "Yoshi.h"
#include "Character.h"

std::string Yoshi::WhatAmI() const{
  return "Yoshi";
}

Yoshi::Yoshi():Character(){}

void Yoshi::Accelerate(){
  if (speed_<max_speed_){
    speed_=speed_+2;
  }
}
