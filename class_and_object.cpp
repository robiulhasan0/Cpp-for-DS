#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        double cgpa;
};
int main ()
{
    student a,b;
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;
    //a.roll = 21;
    //a.cgpa = 3.95;
    //char tmp[100]="robiul";
    //strcpy(a.name,tmp);

    cout << a.name << " " << a.roll << " "
    << a.cgpa << endl;
    cout << b.name << " " << b.roll << " "
    << b.cgpa << endl;
    return 0;
}