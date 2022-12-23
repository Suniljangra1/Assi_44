//  question 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    cout<<"Set is Empty "<<s.empty();
    s.insert(12);
    s.insert(2);
    s.insert(16);
    s.insert(15);

 set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}