#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string name;
  cout << "Please enter you first name:\n" << endl;
  getline(cin, name);
  
  string city;
  cout << "Please enter the city you are from\n" << endl;
  getline(cin, city);

 string animal;
 cout << "Please enter your favorite animal\n" << endl;
 getline(cin,animal);

 string weather;
 cout << "Please enter your least favorite weather\n" << endl;
 getline(cin,weather);

 string game;
 cout << "Please enter your favorite outdoors game to play\n" << endl;
 getline(cin,game);

 string food;
 cout << "Please enter your favorite food\n" << endl;
 getline(cin,food);


cout << "Yesterday,\n" << name; cout << " and I went to the park in " << city; cout << ". On our way to the park we saw a " << animal; cout << " running around. We also saw people jogging on the sidewalks. Once we finally got to the park it was " << weather; cout << ". So we decided to hurry up and play some " << game; cout << ". After that we went on our way home and decided to grab something to eat and we ended up getting " << food; cout << ". Tomorrow we will try to go to the park and hope it isn't " << weather; cout << ".";



}