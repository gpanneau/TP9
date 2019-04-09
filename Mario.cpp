#include <iostream>
#include "Mario.h"
#include "Character.h"

std::string Mario::WhatAmI() const{
  return "Mario";
}

Mario::Mario():Character(){}
