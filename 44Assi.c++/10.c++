// Question 10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,4};
     set<int> r;

     for(int i=0;i<5; i++)
     {
        if(a[i]==i)
        {
            cout<<"Missing is "<<i<<endl;
            a[i]=i+1;
        }
     }
    for(auto i : a )
   {
    r.insert(i);
   }
   set<int>::iterator i;
    for(auto i=r.begin();i!=r.end();i++)
    {
        cout<<*i<<" ";
    }
}