#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
student fun()
{
    student robiul(21,10,4.99);
    return robiul;
}
int main ()
{
    student ans = fun();
    cout << ans.roll<<" "<<ans.cls <<" "
    << ans.gpa << endl;
    return 0;
}