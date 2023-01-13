#include <bits/stdc++.h>
using namespace std;
void explainvector()
{
    //  vector is a dynamic array container and its size gets doubled after filling of initial size

    vector<int> v;                            //declaration

    v.push_back(1);                         // insert values into vector
    v.push_back(3);
    v.emplace_back(5);                     // much faster than push back

    vector<pair<int, int>> vecpair;
    vecpair.push_back({1, 5});
    vecpair.emplace_back(2, 6); // syntax diff

    // print single element in vector by indexing
    cout << v[0] << endl;
    cout << vecpair[0].first << vecpair[0].second;

    vector<int> hello(4, 89); // declare a vector of size 4 of all elements 89

    vector<int> vec(10); // size is 10 initiallized all by 0

    vector<int> v1(v); // copy of v in v1

    // iterator concept with vector

    vector<int>::iterator it = v.begin(); // it points to the address location of the memory pointed
    // it->>index 0 at begin
    it++;
    // it-->index 1 or begin+1
    //  begin()-->only points the adress for value use * as *(it)

    cout << "" << *(it) << endl;

    // vector<int>::iterator it=v.end();//it points to the next to the last memory location
    cout << v.back(); // shows the last element

    // printing values in vector

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << "";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    // vector<int>::iterator ->> auto it automatically understand the data type
    {
        cout << *(it) << endl;
    }

    // for each loop
    for (auto it : v)
    {
        cout << it << "";
    }

    // deletion
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.erase(v.begin());                    // v.begin()->>address of the element to be deleted
    v.erase(v.begin() + 2, v.begin() + 3); //-->start address and end address next to be deleted [s,e)


    // insert 

    v.insert(v.begin()+5,200);//(start address,element)
    v.insert(v.begin(),5,10); //(start address,no of element,the element)

    // copy
    vector<int>copy(2,30);
    v.insert(v.begin(),copy.begin(),copy.end());

    // prints size

    v.size();

    v.pop_back();//delets the last element

    v1.swap(v);//swaping

    v.clear();//delete all elements

    cout<<v.empty();// shows 0 and 1 empty or not 
    sort(v.begin(),v.end());

}
int main()
{
    explainvector();
    return 0;
}
