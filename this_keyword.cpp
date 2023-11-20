#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout<<"Hello"<<endl;
        }
};
int main ()
{
    person robiul("Robiul Hasan",24);
    cout<<robiul.name<<" "<<robiul.age<<endl;
    return 0;
}