// question 8
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> t;
    t.insert(5);
    t.insert(4);
    t.insert(6);
    t.insert(10);
    auto it = t.find(4);
   
    for(auto i=it; i!=t.end();i++)
    {
        cout<<*i<<" ";
    }
}