#ifndef YOSHI_
#define YOSHI_

#include <iostream>
#include "Character.h"

class Yoshi : public Character{/*Class character's daughter class*/
  private:
    int NbrOfCrests_;/*Number of crests that this Yoshi has*/
  public:
    std::string WhatAmI() const override;/*Overrate "std::string WhatIAm() const"
    from its mother class. Return the character identity : "NbrOfCrests_ + "crested Yoshi""*/
    Yoshi(int NumberOfCrests);
    void Accelerate() override;
    ~Yoshi();
};

#endif //YOSHI_
