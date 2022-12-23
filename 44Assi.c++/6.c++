// Question 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(109);
    s.insert(106);
    s.insert(103);
    s.insert(120);
    s.insert(110);
    s.insert(110);
    s.insert(102);
    auto it= s.lower_bound(4);
    cout<<"Smallest value in set is "<<*it<<endl;
   set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}