// parameterized constructor




#include <iostream>
using namespace std;
class student
{

public:
    // student()
    // {
    //     cout<<"default cons"<<endl;

    // }



    // paramerterized constructor
    //->here a parameter is passed

    student(int id)
    {
       int sid =id+200;
        cout << sid << endl;
    }


    //this keyword
    // this keyword ->>>it points to current object address



    int id;
    char level;

    student(int a,char c)
    {
        this->id=a;
        this->level=c;
        cout<<a<<endl<<c<<endl;
    }
};
int main()
{
    // student agni;
    student akash(20);
    student rahul(70,'a');


    student *ram = new student(100);

    return 0;
}