#include <bits/stdc++.h>
using namespace std;

void explainqueue()
{  
    // fifo 
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(7);
    q.push(8);
    q.push(0);
    q.emplace(18);
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front();
}

int main()
{  
    explainqueue();
    return 0;
}
