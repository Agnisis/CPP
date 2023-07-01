#include <iostream>
using namespace std;

struct student{

    int rollNo;
    char name[20];
    float marks;
    string address;
}s;
int main() { 

struct student s1={45,"agnisis",45.4};// struct keyword is optional
student s2;
s.marks=10;
//s.name="agnisis";
s.address="agnisis";

cin>>s.name;
cout<<s.name;
cout<<s1.name;


    return 0; 
}