#include "animal.h"
#include <iostream>
#include <vector>
using namespace std;
int n=3;

Animal::Animal()
{/*
animalBreed="none";
animalWeight=0;
animalName="none";
animalGender="none";
animalSpayed="none";
animalRegistration="none";
*/}


void Animal::SetBreed(string breed) {
    this->breed = breed;
}

string Animal::GetBreed() {
   return breed;
}

void Animal::SetWeight(float weight) {
    this->weight = weight;
}

float Animal::GetWeight() {
   return weight;
}

void Animal::SetName(string name) {
    this->name = name;
}

string Animal::GetName() {
   return name;
}

void Animal::SetGender(string gender) {
    this->gender = gender;
}

string Animal::GetGender() {
   return gender;
}

void Animal::SetSpayed(string spayed) {
    this->spayed = spayed;
}

string Animal::GetSpayed() {
   return spayed;
}
void Animal::SetRegistration(string registration) {
    this->registration = registration;
}

string Animal::GetRegistration() {
   return registration;
}



void Animal::PrintInfo(Animal myanimalsArray[]) {
  //display all the information about cat
        cout<<"\nCat Information"<<endl;
        //traversing the vector

        for (int i=0; i<n; i++){
             string animalbreed =  myanimalsArray[i].GetBreed();

             cout<<animalbreed<<" "<<endl;
             cout<<myanimalsArray[i].GetWeight()<<" "<<endl;
             cout<<myanimalsArray[i].GetName()<<" "<<endl;
             cout<<myanimalsArray[i].GetGender()<<" "<<endl;
             cout<<myanimalsArray[i].GetSpayed()<<" "<<endl;
             cout<<myanimalsArray[i].GetRegistration()<<" "<<endl;


        }
}
