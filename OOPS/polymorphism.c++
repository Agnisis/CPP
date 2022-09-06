#include <iostream>
using namespace std;

/*


POLYMORPHISM

=> MANY FORMS--->


TYPES:
1.COMPILE TIME POLYMORPHISM
2.RUNTIME POLYMORPHISM













COMPILE TIME POLYMORPHISM(staic)

1.FUNCTION OVERLOADING
2.OPERATOR OVERLOADING


FUNCTION OVERLOADING

->making functions with same name
->we need to change the input parametrs(arguments) to overload the functions
->changing the return type will not overload and cause error




OPERATOR OVERLOADING

->using the operators for custom purpose







RUNTIME POLYMORPHISM(dynamic)

METHOD OVERRIDDING

->to reuse the method of a parent class by the child class

rules:
1.must have same name
2.must have same parameters
3.possible through inheritance only





*/


//static polymorphism

class A
{
public:
    void sayHello()
    {
        cout << "hello akash" << endl;
    }
    void sayHello(string name)
    {
        cout << "hello " << name << endl;
    }
    void sayHello(string name, int age)
    {
        cout << "hello " << name << " and age is " << age << endl;
    }
};


class B{

    public:

    int a;
    int b;
   
    void operator+ (B &num){
        int value1=this->a;
        int value2=num.a;
        cout<<"output is  "<<value2-value1<<endl;
        
    }
};


//runtime polymorphism


class Animal{

    public:

    void speak(){
        cout<<"speaking "<<endl;
    }
};



class Dog:public Animal{

    public:

    void speak(){
        cout<<"barking"<<endl;
    }
};










int main()
{
//function overloading
    A obj;
    obj.sayHello();
    obj.sayHello("agnisis");
    obj.sayHello("aakash", 20);



//operator overloading
    B num1,num2;
    num1.a=4;
    num2.a=5;
    num1+num2;





    Dog lab;
    lab.speak();// if new function is declared then the curent class function will be called if not then the parent class fn will be called as usual

    return 0;
}