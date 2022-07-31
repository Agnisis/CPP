/* STL->Standard template library
 it is a collection of some prebuild usefull  -
 1.algoritms
 2.containers
 3.functions
 4.iterators
 */
#include <bits/stdc++.h>
using namespace std;


// utility class  pair

void explainpair()
{
    pair<int, int> p;
    cout << "input__>" << endl;
    cin >> p.first >> p.second;
    cout << p.first << p.second << endl;
    // pair of pair
    cout << "input__>" << endl;
    pair<int, pair<float, float>> name;
    cin >> name.second.second >> name.first >> name.second.first;
    cout << name.second.second << endl
         << name.first << endl
         << name.second.first << endl;

    // array of pairs

    pair<int, int> arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "input" << endl;
        cin >> arr[i].first >> arr[i].second;
    }
    for (int i = 0; i < 3; i++)
    { 
        cout << "output " << endl;
      cout<<arr[i].first<<endl<<arr[i].second<<endl;
   }

  pair <int,int>g1;
  pair<int,int>g2;
  g1=make_pair(1,5);
  g2=make_pair(4,5);
  g1.swap(g2);
  cout<<g1.first<<endl<<g1.second<<endl; 

}
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    // int s = sum(1, 3);
    // cout << s << endl;
    explainpair();
    return 0;
}

