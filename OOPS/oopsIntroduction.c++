/* pillers of oops:



1.Encapsulation
2.Polymorphism
3.Inheritance
4.Abstraction



ENCAPSULATION:

ITS A METHOD OF WRAPPING THE DATA MEMBERS(PROPERTIES) AND FUNCTIONS(BEHAVIOUR) INSIDE A SINGLE BLOCK OF CODE
IN SIMPLE WORDS "CLASS" IS THE EXAMPLE OF ENCAPSULATION.


FULLY ENCAPSULATED CLASS

WHERE ALL THE DATA MEMBERS ARE PRIVATELY MODIFIED
THEY ARE USED IN SAME CLASS NOT BY OTHER CLASSES



ADVANTAGES:

1.INFORMATION HIDING (SECURITY ++)
2.IF WE CAN MAKE CLASS READ ONLY BY GETTER
3.CODE REUSEBILITY
4.UNIT TESTING



*/

#include <iostream>
using namespace std;





//ENCAPSULATION
class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};




int main()
{

    Student first;
    cout << "Object of student called" << endl;

    return 0;
}
