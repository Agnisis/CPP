#include<iostream>
using namespace std;


//single inheritance



class animal{

    public:
    int name;
    int type;
    void speak(){
        cout<<"speaking"<<endl;
    }
};



class dog:public animal{

    int age;
    int color;
};
int main()
{  

dog lab;
lab.speak();
    return 0;
}