#ifndef MARIO_
#define MARIO_

#include <iostream>
#include "Character.h"

class Mario:public Character{
  public:
    std::string WhatAmI() const override;
    Mario();
};

#endif //MARIO_
