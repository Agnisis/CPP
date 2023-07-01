/*pointers


        POINTERS are used to store the address of a variable (memory location)



   symbol table-> with this variables are maped with their coresponding addresses


*/

#include <iostream>
using namespace std;




int main()
{

    // **********************basics of pointer****************888
    int var1 = 100;
    // declare a pointer

    int *ptr; // datatype(of which the pointer is pointing) *pointer_name
    // initialization

    // declaring a pointer without assigning value is a bad practice because by default it points any random memory (garbage) which can cause problem to os so better to declare it with 0 ->> int *ptr=0

    // if we print *(ptr) after initialising with 0 it will provide segmentation fault because memory address of 0 didnot exist

    ptr = &var1;

    //&->address of operator ->provides the address of the variable
    //*->dereferencing operator ->provides the value which is pointed by a pointer

    cout << var1 << endl;    // prints the value of var1
    cout << &(var1) << endl; // prints the address of var1

    cout << ptr << endl; // prints the address of var1 with address of operator

    cout << *(ptr) << endl; // prints the value pointed by the address stored in ptr   ptr->>var1

    char ch = 'a';
    char *charptr = &ch; // character pointer
    cout << ch << endl;
    cout << charptr << endl;
    cout << *(charptr) << endl
         << endl
         << endl;

    // ******************size of pointer*********************

    cout << "size of ptr is " << sizeof(ptr) << endl;
    cout << "size of charptr is " << sizeof(charptr) << endl;

    //***here size of pointer is 8 because it stores address irrespective of the data type it points

    // it gives the size of datatypes

    cout << "size of var1 is " << sizeof(var1) << endl;
    cout << "size of ch is " << sizeof(ch) << endl
         << endl
         << endl;

    //************ pointer arithmetic******************

    int a = 10;
    int *p = &a;
    a++;
    cout << a << endl;
    cout << p << endl;
    (*p)++;
    cout << *p << endl;
    (*p)--;
    cout << *p << endl;
    (*p) /= 10;
    cout << *p << endl;
    (*p) *= 10;
    cout << *p << endl;
    int *q = p;
    // copying of pointer
    // now both p and q points same variable

    cout << *q << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << p << endl
         << endl
         << endl;

    //**************** array and pointers ***************

    // symbol table maps the array 1st index address with its name

    // An array name acts like a pointer constant. The value of this pointer constant is the address of the first element.

    int arr[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

    cout << "address of 1st block is ->" << arr << endl;
    cout << arr[0] << endl;  // value at index 0
    cout << &arr[0] << endl; // provide address of 1st block

    // accesing the array elements with the help of pointer
    cout << *arr << endl;
    cout << arr + 1 << endl; // it points to next address corresponding to size of data type
    // ex- int array so 0th index address + 4 bytes = 1st index address
    cout << *arr + 1 << endl; // increment the value at first index by 1
    cout << *(arr + 1) << endl;

    //    arr[i]=*(arr+i)             i[arr]=*(arr+i)         both evaluate same

    // print array

    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << "  ";
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i[arr] << "  ";
    }

    // diff between pointer array and pointer

    // size diff
    int *p1 = &arr[0];
    cout << sizeof(arr) << endl; // gives size of whole array
    cout << sizeof(p1) << endl;  // gives size of the memory location pointed by p1

    // address diff

    int b[10] = {1, 2, 3, 4, 5};
    int *c = &b[0];
    cout << &b << endl;
    cout << b << endl;
    cout << &b[0] << endl;

    cout << c << endl;
    cout << &c << endl;
    cout << *c << endl; //&b and &c gives diff values

    // symbol table diff

    // symbol table content cannot be changed
    // b=b+1;   it gives error  because we are changing the conmtent of symbol table
    // c=c+1;  it does not give any error it moves to next location





    //character arrays

      char cha[5]="abcd";
      cout<<cha<<endl;//it prints the content not the address
      char *x=&cha[0];
      cout<<x<<endl;
      //cout behaviour is diff
      char temp='z';
      char *z=&temp;
      cout<<p<<endl;



   




    return 0;
}
