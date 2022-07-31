#include <bits/stdc++.h>
using namespace std;

void explainmultiset()
{
    multiset<int> ms;
    // it is same as set it store valuees in sorted order but not unique only

    ms.insert(1);
    ms.insert(18);
    ms.insert(17);
    ms.insert(17);
    ms.insert(12);
    ms.insert(12);
    ms.insert(1);
    ms.insert(1);
    ms.insert(128);
    ms.insert(10);

    // it will store all similar values unlike set

    ms.erase(1); // it will erase all similar elements

    //  to erase only that element

    ms.erase(ms.find(1)); // address of specific element

    // to erase more

    ms.erase(ms.begin(), ms.find(1)); // return always iterator addresses
}
int main()
{
    explainmultiset();
    return 0;
}
