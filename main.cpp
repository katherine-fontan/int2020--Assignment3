/*
Katherine Fontan
2290561
luzfonta@chapman.edu
Assignment 3- Problem 1

Create a class called Pet with all the necessary files.
This class should have member variables name (string), age (int),
type ([‘dog’, ‘cat’]) (string) and weight (double).
*/

#include <iostream>
#include "header.h"
using namespace std;

int main (int argv, char **argc){
  //create 2 instances of Pet
  Pet *pet1 =  new Pet("Luna", 4, "dog", 40);
  Pet *pet2 = new Pet ("Simba", 1, "cat", 20);

  //print their details

  cout<< "My " << pet1-> getPetType()<< "\'s name is " << pet1->getPetName() << " she weights "
  << pet1->getPetWeight() << " pounds and is " << pet1->getPetAge() <<" year(s) old." << endl;

  cout<< "My " << pet2-> getPetType()<< "\'s name is " << pet2->getPetName() << " he weights "
  << pet2->getPetWeight() << " pounds and is " << pet2->getPetAge() <<" year(s) old." << endl;

  delete pet1;
  delete pet2;

  return 0;
}
