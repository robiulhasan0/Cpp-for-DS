#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // string s = "Hello World";
    // cout << s.size() <<endl;
    // string s = "Hello";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // string s;
    // if(s.empty()==true) cout<<"Empty"<<endl;
    // else cout<<"Not Empty"<<endl;

    string s;
    cin>>s;
    //s.resize(5);
    s.resize(8,'x');
    cout<<s.size()<<endl;
    cout<<s<<endl;

    return 0;
}