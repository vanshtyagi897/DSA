#include <bits/stdc++.h>
//#include<string>
using namespace std;
class Student{
    public:
    string gender;
    int roll;
    int age;
    void mentalState(){
    cout<<"fu**ed up"<<endl;
    }
};

int main() {
//way one to create an object:    
    // Student Vansh;
    // Vansh.gender="Male";
    // Vansh.age=20;
    
    // cout<<"Vansh is " << Vansh.age<<" years old "<<Vansh.gender<<" person and currently his brain is ";
    // Vansh.mentalState();
    
//way two to create an object:    
    Student* Vansh = new Student;//pointer to object
    (*Vansh).gender="male";
    cout<<"Vansh is "<<(*Vansh).gender;

    return 0;
}