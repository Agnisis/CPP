#include <bits/stdc++.h>
using namespace std;

void explainstack()
{
    stack<int> st;
    // last in first out lifo

    st.push(1);
    st.push(3);
    st.push(1);
    st.push(3);
    st.push(1);
    st.push(3);

    cout << st.top();
    st.pop();
    cout << st.size();

    cout << st.top();
    cout << st.empty() << endl;
    stack<int> s1;
    st.swap(s1);
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
}

int main()
{
    explainstack();
    return 0;
}