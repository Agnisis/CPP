#include <iostream>
using namespace std;

class fullstack
{
    string name;
    int no_of_skills;
    string name_of_stack;
    friend class tcs;

public:
    void print()
    {
        cout << "This user " << name << " works on " << name_of_stack << " and know " << no_of_skills << " skills "<<endl;
    }
};

class tcs{
    public:
    
    void print(fullstack& s1){
        s1.name_of_stack="Mern";
        cout<<"this employee of tcs working on "<<s1.name_of_stack<<endl;
    }
};
int main()
{

    fullstack s1;
    s1.print();
    tcs t1;
    t1.print(s1);


    return 0;
}