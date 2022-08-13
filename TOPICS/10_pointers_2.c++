#include<iostream>
using namespace std;

//pass by value concept is used here 
//in main function updatefunction takes p and copy of *p is created and operation is done in update function
void update (int *p)
{   
    //here we pass thhe pointer having address of a variable 
    cout<<*p+10<<endl;
    p=p+1;

}

int getsum(int *arr,int n)
{   
      
    cout<<sizeof(arr)<<endl;//it does not give the size of the whole array it only gives the size of the first element because when we pass array in function it doesnot pass the whole array it passes a array pointer we can write 
    //int getsum(int *arr,int n)
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];//i[arr]==arr[i]
    }
    return sum;
}

 
int main()
{  
    int a=100;
    int *p=&a;
    update(p);
    cout<<p<<endl;//dont change the real value of p call by value
    cout<<*p<<endl;



 int arr[8]={1,2,3,4,4,3,2,1};
 cout<< getsum(arr+4,4)<<endl;
  






    return 0;
}





// pointers in function 



