#include <iostream>
#include <string>
using namespace std;

class Pet
{
  public:
    Pet();//default constructor
    Pet(string name, int age, string type, double weight); //overloaded constructor
    //function if needed

    //acessors AKA getters-accessors (access value)
    string getPetName();
    int getPetAge();
    string getPetType();
    double getPetWeight();

    //mutators AKA setters (change the value)
    void setPetName(string name);
    void setPetAge(int age);
    void setPetType(string type);
    void setPetWeight(double weight);

  private:
    string petName;
    int petAge;
    string petType;
    double petWeight;

};
