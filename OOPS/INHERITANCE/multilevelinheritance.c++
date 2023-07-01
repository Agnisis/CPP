#include <iostream>
using namespace std;
class animal
{

public:
    int name;
    int type;
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public animal
{
public:
    int age;
    int color;
};

// multilevel inheritance

class lab : public dog
{

public:
};
int main()
{

    lab a;
    a.speak();
    return 0;
}