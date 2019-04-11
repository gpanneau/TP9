#ifndef YOSHI_
#define YOSHI_

#include <iostream>
#include "Character.h"

class Yoshi : public Character{
  private:
    int NbrOfCrests_;
  public:
    std::string WhatAmI() const override;
    Yoshi(int NumberOfCrests);
    void Accelerate() override;
    ~Yoshi();
};

#endif //YOSHI_
