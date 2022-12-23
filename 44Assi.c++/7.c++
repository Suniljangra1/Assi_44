// Question 7
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(109);
    s.insert(106);
    s.insert(500);
    s.insert(450);
    s.insert(112);
    s.insert(110);
    s.insert(100);
    auto it= s.upper_bound(109);
    cout<<"upper bound  set is  "<<*it<<endl;
   set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}