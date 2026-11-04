#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int mai(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); //duplicate will be ignored
    for (int x:s)
    {
        cout<<x<<" ";//output:125

    }
    cout<<endl;
    cout<<"size of set: "<<s.size()<<endl;
    cout<<"find 3:"<<(s.find(3) !=s.end() ? "Found" s.erase(3);)
    cout<<"size after erasing 3:"<< s.size ()<<endl;
    return 0;
}