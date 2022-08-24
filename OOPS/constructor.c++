#include <iostream>
using namespace std;

class name
{
public:
    int a;
    name() // when we declace constructor by our own the default cons vanishes
    {
        cout << "hello" << endl;
    }

    // paramerterised cobstructor

    // this keyword ->>>it points to current object address
    name(int a)
    {
        cout << this << endl;
        this->a = a;
    }
};

int main()
{

    name agni(20);
    cout << agni.a << endl;
    // when we declare a object a constructor is invoked by default   no return type no input parameter

    cout << &agni << endl;
    // dynamic allocation
    name *agni2 = new name(11);
    // name *agni2 = new name;
    cout << agni2->a << endl; //-> as agni2 is a pointer which points to the class
    

    return 0;
}
