#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << endl<< endl<< "Enter the two numbers : " << endl<< endl;
    cin >> a >> b;

    cout << "Before swaping the First no is " << a << " and the Second no is " << b << endl<< endl;






    // using third variable

    int temp;
    temp = a;
    a = b;
    b = temp;







    // without using 3rd variable

    // a=a+b;
    // b=a-b;
    // a=a-b;




    cout << "After swapping " << endl<< endl;
    cout << "First number is " << a << " and the Second number is " << b << endl;

    return 0;
}