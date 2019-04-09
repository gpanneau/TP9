#ifndef YOSHI_
#define YOSHI_

#include <iostream>
#include "Character.h"

class Yoshi : public Character{
  public:
    std::string WhatAmI() const override;
    Yoshi();
};

#endif //YOSHI_
