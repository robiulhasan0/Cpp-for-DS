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
// student fun()
// {
//     student* robiul = new student(21,10,4.99);
//     // return robiul;
// }
int main ()
{

    //student robiul(21,10,4.56);
    student* karim = new student(21,10,4.56);
    cout << karim->roll<<" "<<karim->cls<<" "
    << karim->gpa<<endl;
    return 0;
}