#include <bits/stdc++.h>
using namespace std;

void explainmap()
{
    // it store unique key in sorted order and value {key,value}  value may be same for diff keys

    map<int, int> m1;
    //(key,value) can be of any ds

    m1[1] = 2; //{1,2}
    m1.insert({2, 45});
    m1.emplace(5, 84);
    m1.emplace(6, 874);
    m1.emplace(3, 34);


    for (auto it : m1)
    {
        cout << it.first << " " << it.second << endl;
    }

cout<<m1[2];// value at key 2

cout<<m1.size();
    
}
int main()
{
    explainmap();
    return 0;
}
