#ifndef CHARACTER_
#define CHARACTER_

class Character{
  protected:
    float speed_;
    float max_speed_;
  public:
    Character();
    void Accelerate();
};

#endif //CHARACTER_
