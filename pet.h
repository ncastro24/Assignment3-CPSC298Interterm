#include <iostream>
#include <string>
using namespace std;

class Pet{
  public:
    Pet(); // default constructor
    Pet(string name, int age, string type, double weight); //overloaded constructor
    //getters
    string getname();
    int getage();
    string gettype();
    double getweight();
    //setters
    void setname(string name);
    void setage(int age);
    void settype(string type);
    void setweight(double weight);

  private:
    string m_name;
    unsigned int m_age;
    string m_type;
    double m_weight;

};
