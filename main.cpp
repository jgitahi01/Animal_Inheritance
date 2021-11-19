#include <iostream>
#include <vector>
using namespace std;
#include "animal.h"
#include "cat.h"
int main(){
//declare a vector for cat
    vector <Animal>animal;
    int n=3;//for no of cats




    for (int i=0; i<n; i++){

        //declare animal object
        Animal animal;
        //declaration
        string breed;
        float weight;
        string name;
        string gender;
        string spayed;
        string registration;
        //declare cat object
        Cat cat;
        string color;
        string comments;
        //cat no (i+1)
        cout<<"Cat"<<(i+1)<<endl;
        //get breed for cat
        cout<<"Enter the cat breed:\n";
        cin>>breed;
         //get weight for cat
        cout<<"Enter the cat weight:\n";
        cin>>weight;
         //get name for cat
        cout<<"Enter the cat name:\n";
        cin>>name;
          //get gender for cat
        cout<<"Enter the cat's gender: m/f:\n";
        cin>>gender;
          //get spayed info for cat
        cout<<"Is the cat spayed?Yes/No:\n";
        cin>>spayed;
          //get registration id for cat
        cout<<"Enter the cat registration Id:\n";
        cin>>registration;
        //clear memory buffer
        fflush (stdin);
          //get color for cat
        cout<<"Enter the cat color:\n";
        cin>>color;
          //get comments for cat
        cout<<"Enter the additional comments about the cat:\n";
        getline(cin, comments);

        //clear memory buffer
        fflush (stdin);

        animal.SetBreed(breed);
        animal.SetWeight(weight);
        animal.SetName(name);
        animal.SetGender(gender);
        animal.SetSpayed(spayed);
        animal.SetRegistration(registration);
        cat.SetColor(color);
        cat.SetComments(comments);


        //mycat.push_back(cat);
    }


        return 0;

}
