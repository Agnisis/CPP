#include <iostream>
using namespace std;

/* INHERITANCE



INHERITANCE:

INHERIT PROPERTIES OF PARENT CLASS BY OTHER CHILD CLASSES


MODEs:

                   FOR PUBLIC MODIFIER IN BASE CLASS(SUPER CLASS)

IF THE CHILD CLASS INHERITES IN THIS MODES :

 PUBLIC :  IT INHERITS AND KEEP THE DATA MEMBERS AS PUBLIC FOR NEW CLASS
 PROTECTED :  IT INHERITS AND KEEP THE DATA MEMBERS AS PROTECTED FOR NEW CLASS
 PRIVATE :  IT INHERITS AND KEEP THE DATA MEMBERS AS PRIVATE FOR NEW CLASS





        FOR PROTECTED MODIFIER IN BASE CLASS(SUPER CLASS)

IF THE CHILD CLASS INHERITES IN THIS MODES :


 PUBLIC :  IT INHERITS AND KEEP THE DATA MEMBERS AS PROTECTED FOR NEW CLASS
 PROTECTED :  IT INHERITS AND KEEP THE DATA MEMBERS AS PROTECTED FOR NEW CLASS
 PRIVATE :  IT INHERITS AND KEEP THE DATA MEMBERS AS PRIVATE FOR NEW CLASS





       FOR PRIVATE MODIFIER IN BASE CLASS(SUPER CLASS)

IF THE CHILD CLASS INHERITES IN THIS MODES :

 PUBLIC :  NOTAACCESSABLE
 PROTECTED : NOTAACCESSABLE
 PRIVATE :  NOTAACCESSABLE



"FOR PRIVATE CLASS NO DATA CAN BE ACCESED BY INHERITANCE"




protected modifier :



its similer to private 

1.it can be accesed by the derived class
2.accesscible by base class
3.cant access directly by main function or other outside the class


TYPES OF INHERITANCE

1.SINGLE
2.MULTILEVEL
3.MULTIPLE
4.HYBRID
5.HEIRARCHICAL


*/

class Human
{

public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male :public Human
{

public:
    string color;
    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{

    Male obj1;
    obj1.age = 10;
    obj1.height = 6;
    obj1.setWeight(60);
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    obj1.sleep();

    return 0;
}