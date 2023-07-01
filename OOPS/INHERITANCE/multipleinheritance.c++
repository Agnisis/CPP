#include <iostream>
using namespace std;

class animal
{

public:
    int name;
    int type;
    void cry()
    {
        cout << "crying" << endl;
    }
};

class dog
{
public:
    int age;
    int color;
    void bark()
    {
        cout << "barking" << endl;
    }
};

class germanshepeard : public animal, public dog
{
};

int main()
{  


    germanshepeard a;
    a.cry();
    a.bark();
    return 0;
}