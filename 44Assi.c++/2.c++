// question 2
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
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}