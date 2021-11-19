#include "cat.h"
#include <iostream>
using namespace std;
#include <vector>



// Define functions declared in cat.h
Cat::Cat()
{
   /*color="none";
   comments="none";*/
}

void Cat::SetColor(string color)
{
    this->color = color;
}

void Cat::SetComments(string comments)
{
    this->comments = comments;
}

string Cat::GetColor() {
   return color;
}

string Cat::GetComments() {
   return comments;
}


void Cat::PrintInfo(Animal animalArray[], Cat catArray[])
{
    Animal::PrintInfo(animalArray);
    //traversing the vector

        for (int i=0; i<3; i++){
             cout<<catArray[i].GetColor()<<" "<<endl;
             cout<<catArray[i].GetComments()<<" "<<endl;
        }
}

Cat::~Cat()
{
    // TODO Auto-generated destructor stub
}
