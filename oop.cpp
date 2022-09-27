#include <iostream>
using namespace std;

class Hero{
  
  int health;
  public:
  char level;


  
  void setHealth(int h){
      health = h;
  };

  void setLevel(char ch){
    level = ch;
  };

  int getHealth(){
    return health;
  };

  char getLevel(){
    return level;
  };


};




int main(){
  Hero Ahmad;
  cout << "Health is: " << sizeof(Ahmad.level) << endl; 
  Ahmad.setHealth(70);
  Ahmad.setLevel('A');

  cout << "Health is: " << Ahmad.getHealth() << endl;
  cout << "level is:" << Ahmad.getLevel() << endl;
  return 0;
};
