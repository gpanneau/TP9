#ifndef MARIO_
#define MARIO_

#include <iostream>
#include "Character.h"

class Mario:public Character{/*Class character's daughter class*/
  public:
    std::string WhatAmI() const override; /*Overrate "std::string WhatIAm() const"
    from its mother class. Return the character identity : "Mario"*/
    Mario(); /*Mario constructor*/
    ~Mario(); /*Mario destructor*/
};

#endif //MARIO_
