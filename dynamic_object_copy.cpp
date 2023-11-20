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
};
int main ()
{
    person* robin=new person("Robin Hut",21);
    person* lia=new person("Rehana Akter",40);

    //robin=lia;
    // robin->name=lia->name;
    // robin->age=lia->age;
    *robin=*lia;
    delete lia;
    cout<<robin->name<<" "<<robin->age<<endl;
    return 0;
}