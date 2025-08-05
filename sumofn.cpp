#include<iostream>
using namespace std;
#include<string>
int main()
{
    int n,i,total=0;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<=n;i++)
    {
      total=total+i;
    }  
       cout<<"the sum of n number is:"<<total<<endl;
       return 0;
}