#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        person(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void hello()
        {
            cout<<"hello"<< " "<<endl;
        }
            int total_marks()
        {
        return marks1+marks2;
        }

};
int main ()
{
    person robiul("Robiul Hasan",24,95,85);
    cout<<robiul.total_marks()<<endl;
    return 0;
}