#include <iostream>
#include "Character.h"
#include "Mario.h"

int main(int argc,char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  Character* Runners[1];
  Runners[0]=new Mario();
  std::cout<<Runners[0]->speed()<<std::endl;
  for (int i=0;i<15;++i){
    Runners[0]->Accelerate();
    std::cout<<Runners[0]->speed()<<std::endl;
  }
  for (int i=0;i<15;++i){
    Runners[0]->Break();
    std::cout<<Runners[0]->speed()<<std::endl;
  }
  std::cout <<Runners[0]->WhatAmI()<<std::endl;
  return 0;
}
