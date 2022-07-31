#include <bits/stdc++.h>
using namespace std;

void explainset()
{  

    //tree is maintained  tc- logn
    set<int> st;

    st.insert(12);
    st.emplace(23);
    st.insert(12);
    st.insert(2);
    st.insert(25);
    st.insert(34);
    st.insert(24);

    // set stores the unique values and in a sorted order

    auto it = st.find(12); // return iterator
    cout << *(it);         // print the value pointed by iterator
    auto it = st.find(3);  // it will return st.end() as the element doesnot exist

    st.erase(12); // erase the element mentioned

    // erase from location

    auto it1 = st.find(12);
    auto it2 = st.find(24); //end address it will delete one before as it return end()

    st.erase(it1, it2); //       strt,end

    int count = st.count(12); // always give 1 if exist unique 0 if not exist


}
int main()
{
    explainset();
}
