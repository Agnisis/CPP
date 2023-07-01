#include <iostream>
using namespace std;

// hybrid

// combination of more than 1 type of inheritance

class a
{
public:
    void func1() { cout << "hello a"<<endl; }
};



class b 
{
public:
    void func() { cout << "hello b"<<endl; }
};




class c : public b
{
public:
    void func() { cout << "hello c"<<endl; }
};
// multiple inheritance








class d : public a, public c
{
};


// ambiquity

class e : public b, public c
{
};

// hybrid ->single a and multilevel c
int main()
{

    d obj;
    obj.func();
    obj.func1();


    e obj1;
    // obj1.func2();   member is ambigious
    obj1.c::func();// scope resolution operator for explicitly mention of class
    return 0;



}




/* INHERITANCE AMBIQUITY

WHEN A CLASS INHERITS A SAME FUNCTIONS THEN ITS GET CONFUSED WHICH ONE TO ACESS THIS PROBLEM IS CALLED AMBIQUITY

IT CAN BE SOLVED BY SCOPE RESOLUTION OPERATOR ::

*/