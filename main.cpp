#include <iostream>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

int main(int argc,char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  Character* Runners[2];
  Runners[0]=new Mario();
  Runners[1]=new Yoshi(2);
  std::cout<<Runners[0]->speed()<<std::endl;
  for (int i=0;i<15;++i){
    Runners[0]->Accelerate();
    Runners[1]->Accelerate();
    std::cout<<Runners[0]->speed()<<std::endl;
    std::cout<<Runners[1]->speed()<<std::endl;
  }
  for (int i=0;i<15;++i){
    Runners[0]->Break();
    Runners[1]->Break();
    std::cout<<Runners[0]->speed()<<std::endl;
    std::cout<<Runners[1]->speed()<<std::endl;
  }
  std::cout <<Runners[0]->WhatAmI()<<std::endl;
  std::cout <<Runners[1]->WhatAmI()<<std::endl;
  return 0;
}
