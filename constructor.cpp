#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        int roll;
        int cls;
        double gpa;
        student(int r,int c,double g)
        {
            roll=r;
            cls=c;
            gpa=g;
        }
};
int main ()
{
    student robiul(21,9,5.01);
    cout << robiul.roll << " " << robiul.cls <<
    " " << robiul.gpa << endl;
    return 0;
}