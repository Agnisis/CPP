#include <bits/stdc++.h>
using namespace std;

void explainlist()
{
    list<int> ls;      // doubly linked list is used;
    ls.push_front(10); // much cheaper tc than insert() in vector
    ls.emplace_front(12);
    ls.push_back(34);
    ls.emplace_back(45);
    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << endl;
    }

    cout << ls.size();
}
int main()
{
    explainlist();
    return 0;
}