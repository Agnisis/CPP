#include <iostream>
using namespace std;

// heirarchical inheritance

// a class which is parent for more than 2 classes

class a
{
public:
    void func1() { cout << "func of a"<<endl<<endl; }
};
class b : public a
{
public:
    void func2() { cout << "func of b"<<endl<<endl<<endl; }
};
class c : public a
{
public:
    void func3() { cout << "func of c"<<endl<<endl<<endl; }
};

int main()
{  

    a obj1;
    obj1.func1();

    b obj2;
    obj2.func1();
    obj2.func2();

    c obj3;
    obj3.func1();
    obj3.func3();

    return 0;
}