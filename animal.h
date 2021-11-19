#ifndef ANIMALH
#define ANIMALH

#include <string>

using namespace std;

class Animal {
   public:
      Animal();

      void SetBreed(string breed);

      string GetBreed();

     void SetWeight(float weight);

     float GetWeight();

      void SetName(string name);

      string GetName();

       void SetGender(string gender);

      string GetGender();

       void SetSpayed(string spayed);

      string GetSpayed();

       void SetRegistration(string registration);

      string GetRegistration();


      void PrintInfo(Animal myanimalsArray[]);

   private:
      string breed;
      float weight;
      string name;
      string gender;
      string spayed;
      string registration;

};

#endif
