#include "header.h"

//class implementation

Pet::Pet(){
  //variable initialized to default variables

  petName = "";
  petAge = 0;
  petType = "";
  petWeight = 0;
}

Pet::Pet(string name, int age, string type , double weight){
  petName = name;
  petAge = age;
  petType = type;
  petWeight = weight;
}

//accessors
string Pet::getPetName(){
  return petName;
}
int Pet::getPetAge(){
  return petAge;
}

string Pet::getPetType(){
  return petType;
}

double Pet::getPetWeight(){
  return petWeight;
}

//mutators
void Pet::setPetName(string name){
  petName = name;
}
void Pet::setPetAge(int age){
  petAge = age;
}
void Pet::setPetType(string type){
  petType = type;
}
void Pet::setPetWeight(double weight){
  petWeight = petWeight;
}
