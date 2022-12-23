// Question 9
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> r;
    string s{"MySirG"};
    for (auto i: s)
    {
        r.insert(i);
    
    }
    set<int>::iterator i;
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}