#include <bits/stdc++.h>
using namespace std;

void explainunorderedset()
{
    unordered_set<int> st;
    //it stores unique elements but not in soted order
    // lower and upper bound doesnot work 
    //0(1) worst case 0(n)(rare)
    st.insert(23);
    st.insert(83);
    st.insert(24);
    st.insert(86);
    st.insert(86);
    st.insert(86);
    st.insert(29);

    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*(it)<<endl;
    }
st.find(24);
st.erase(st.begin(),st.find(86));
cout<<st.size();

}

int main()
{
    explainunorderedset();
    return 0;
}
