#ifndef CHARACTER_
#define CHARACTER_

class Character{
  protected:
    float speed_;
    float max_speed_;
  public:
    Character();
    ~Character()=default;
    void Accelerate();
    void Break();
    inline float speed() const;
};

inline float Character::speed() const{
  return speed_;
}

#endif //CHARACTER_
