#include <iostream>

using namespace std;

int main(){

  double weight;
  int x;

  std::cout <<"Please enter your earth weight: " ;
  std::cin >> weight;

  std::cout <<"\n I have information for the following planets:\n\n";
  std::cout << "1. Venus 2. Mars 3.Jupiter\n";
  std::cout << "4. Saturn 5. Uranus 6. Neptune\n";

  std::cout <<"Which planet are you visiting? Please choose the number of the planet: \n";
  std::cin >> x;

  if(x==1){
    weight = weight * 0.78;

  }else if(x==2){
    weight = weight * 0.39;

  }else if(x==3){
    weight = weight * 2.65;

  }else if(x==4){
    weight = weight * 1.17;

  }else if(x==5){
    weight = weight * 1.05;

  }else if(x==6){
    weight = weight * 1.23;

  }

std::cout << "\n Your weight: " << weight <<"\n";

}

