/* object oriented programing is a programing paradigm where everything revolves arround objects
 object is a entity which has a property and a behaviour(real world)
 increases extinsibility productibility managebility of programing
 object is instance of class

 class is a user defined data-type
 we declare class type objects

we can import class file by #include "class-name"

for empty class it always has a size of 1 as to track the identification
*/
#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    int lvl;
    char name[100];

    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
};

/*getter ->fetch data for private members
 setter  ->set data for private members
*/

/*access modifiers

public-->can be acessed inside and outside the class
private-->only be accesed by private members   by default all members in class is private
protected-->
*/

int main()
{
    // static allocation
    Hero h1;

    h1.lvl = 3;
    h1.sethealth(301);
    cout << h1.gethealth() << endl;
    cout << "size of hero is ->" << sizeof(h1) << endl<<endl<<endl;

    // dynamic allocation
    Hero *h2 = new Hero;
    h2->lvl = 100;
    h2->sethealth(20);
    cout << (*h2).lvl << endl;
    cout << (*h2).gethealth() << endl;
    cout << h2->lvl << endl;
    cout<<sizeof(h2)<<endl<<endl<<endl;




    return 0;
}
