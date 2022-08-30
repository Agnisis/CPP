// default constructor

#include <iostream>
using namespace std;

class name
{
public:
    int a;

    // Default constructor
    // when we declace constructor by our own the default cons vanishes
    name()

    {
        cout << "Default constructor" << endl;
    }

};

int main()
{

    name agni;
    // default constructor called

    agni.a = 10;
    cout << agni.a << endl;

    // when we declare a object a constructor is invoked by default   no return type no input parameter
    cout << &agni << endl
         << endl
         << endl;

    // dynamic allocation
    name *agni2 = new name;
    cout << agni2->a << endl
         << endl
         << endl; //-> as agni2 is a pointer which points to the class

    return 0;
}
