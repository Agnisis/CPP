#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }
    return sum;
}
// return by reference

int &func(int a)
{
    int num = a;
    int &w = a;
    return w;
}

// return by pointer

int *fun(int a)
{
    int *ptr = &a;
    return ptr;
}

// its a bad practice to return by ref or pointer because outside this function the local variables has no scope so it returns value of another locations

void update(int n) // pass by value
{
    n++;
}

void update2(int &l) // pass by reference
{
    l++;
}

int main()

{ // reference variable

    int i = 5;
    int &j = i;
    cout << i << endl;
    cout << j << endl;
    j++;
    cout << i << endl
         << endl
         << endl;

    // both i and j can point same memory block

    int n = 6;
    cout << n << endl;
    update(n);
    cout << n << endl;
    update2(n);
    cout << n << endl
         << endl
         << endl;

    func(n);
    fun(n);

    // Static memory allocation

    /*int n;
    cin>>n;
    int arr[n];
    */

    // this is a very bad practice because in compile time program is assigned with limited STACK memory::static memeoy allocation  but if we put the size of array in runtime then the memory exceeds and program crash so better to use HEAP memory alocation :dynamic mermory

    // dynamic memory allocation

    char *ch = new char;
    *ch = 'a';
    cout << *ch << endl
         << endl
         << endl;

    // dynamic array allocation

    int k;
    cin >> k;
    int *arr = new int[k];

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    cout << getsum(arr, k) << endl;
    delete ch;
    delete[] arr;
    // diffence between static and dynamic allocations
    // more memory req in dynamic (8 for pointer stack and for required heap)
    // we have to clear the memory manually but in static it releases automatically
    return 0;
}