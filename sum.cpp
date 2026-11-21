#include<iostream>
#include<cmath>
#include<string>

using namespace std;

struct Student{

        /* data */
       std:: string name;
        int age;
        float GPA;
};
 int main(){

    struct Student one;
    one.name ="Arnesh";
    one.age = 18;
    one.GPA =3.56;

    cout<<one.name;
    return 0;
 }