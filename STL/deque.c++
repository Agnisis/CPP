#include <bits/stdc++.h>
using namespace std;

void explainqueue()
{

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(12);
    dq.push_front(12);
    dq.push_front(12);
    dq.emplace_back(1900);
    dq.emplace_front(56);

    dq.pop_back();
    dq.pop_back();
    dq.pop_front();
    cout << dq.size() << endl;
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << endl;
    }

    cout << "hello" << dq.back() << endl;
    cout << dq.front();
}
int main()
{
    explainqueue();
    return 0;
}