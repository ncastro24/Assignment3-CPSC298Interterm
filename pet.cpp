#include "pet.h"

Pet::Pet(){
  // initialize variables to default values
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

Pet::Pet(string name, int age, string type, double weight){
  //initialize variables to default values
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

//getters
string Pet::getname(){
  return m_name;
}
int Pet::getage(){
  return m_age;
}
string Pet::gettype(){
  return m_type;
}
double Pet::getweight(){
  return m_weight;
}

//setters
void Pet::setname(string name){
  m_name = name;
}
void Pet::setage(int age){
  m_age = age;
}
void Pet::settype(string type){
  m_type = type;
}
void Pet::setweight(double weight){
  m_weight = weight;
}
