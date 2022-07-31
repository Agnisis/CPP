#include<bits/stdc++.h>
using namespace std;
void explainpqueue()
{

     //max heap tree structure is maintained in max priority queue 
priority_queue<int>pq;
pq.push(2);
pq.push(7);
pq.push(5);
pq.push(9);
cout<<pq.top()<<endl;


pq.pop();
cout<<pq.top();
pq.push(1);
cout<<pq.top();


//min heap tree structure is maintained in min priority queue 
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(7);
pq.push(8);

pq.push(5);

pq.push(9);

pq.push(3);

cout<<pq.top()<<endl;


}
int main()
{  
    explainpqueue();
    return 0;

}