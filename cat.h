#ifndef CATH
#define CATH
#include <string>
#include "animal.h"
using namespace std;

class Cat : public Animal
{
private:
    string color;
    string comments;

public:
    //default constructor

    Cat();

    //setter method to set color

    void SetColor(string);

    //setter method to set comments

    void SetComments(string);

    //Getter to get color
    string GetColor();
    //Getter to get comments
    string GetComments();
    //method to print information of cat

    void PrintInfo(Animal animalArray[], Cat catArray[]);
    virtual ~Cat();
};

#endif
