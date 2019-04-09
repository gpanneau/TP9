#ifndef CHARACTER_
#define CHARACTER_

#include <iostream>

class Character{
  protected:
    float speed_;
    float max_speed_;
  public:
    Character();
    ~Character()=default;
    virtual void Accelerate();
    void Break();
    inline float speed() const;
    virtual std::string WhatAmI() const = 0;
};

inline float Character::speed() const{
  return speed_;
}

#endif //CHARACTER_
