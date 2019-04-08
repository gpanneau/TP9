#include <iostream>
#include "Character.h"

int main(int argc,char* argv[]){
  std::cout<<"Hello World !"<<std::endl;
  Character Ctr;
  Ctr=Character();
  std::cout<<Ctr.speed()<<std::endl;
  for (int i=0;i<15;++i){
    Ctr.Accelerate();
    std::cout<<Ctr.speed()<<std::endl;
  }
  for (int i=0;i<15;++i){
    Ctr.Break();
    std::cout<<Ctr.speed()<<std::endl;
  }
  return 0;
}
