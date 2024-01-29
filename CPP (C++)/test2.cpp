#include<iostream>
using namespace std;

template <int i>
void a(){
  a<i + 1>();
}

void foo(){
  a<0>();
}

int main(){
  std::cout<<"Hello how are you";
  return 0;
}
