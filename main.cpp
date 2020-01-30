#include "pet.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  Pet *p = new Pet();
  Pet *p2 = new Pet("Fido", 5, "dog", 20.0);
  string newname;
  int newage;
  string newtype;
  double newweight;

  cout << "What is your pet's name?: " << endl;
  cin >> newname;
  p->setname(newname);

  cout << "What is your pet's age?: " << endl;
  cin >> newage;
  p->setage(newage);

  cout << "What type of animal is your pet?: " << endl;
  cin >> newtype;
  p->settype(newtype);

  cout << "What is your pet's weight?: " << endl;
  cin >> newweight;
  p->setweight(newweight);

  cout << "You have a " << p->getage() << " year old " << p->gettype() << " who's name is " << p->getname() << " and weighs " << p->getweight() << " lbs." << endl;
  cout << "I have a " << p2->getage() << " year old " << p2->gettype() << " who's name is " << p2->getname() << " and weighs " << p2->getweight() << " lbs." << endl;


  delete p;
  delete p2;

  return 0;

}
