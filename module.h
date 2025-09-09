#include<iostream>
#include<string>
using namespace std ;
class Cricketer{
    public:
    string name;
    int age;
    string experience;
    void career(){
       cout<<name<<" is "<<age<<" years old and has an experience of "<<experience<<" years.";
    }

};