#include<bits/stdc++.h>
using namespace std;
namespace Robin
{
    int age=21;
    void hello()

    {
       cout<<"Robin namespace"<<endl;
    }
}
namespace Lia
{
    int age2=20;
    void hello2()
    {
        cout<<"Lia namespace"<<endl;
    }
}
using namespace Robin;
using namespace Lia;
int main ()
{
    cout<<age<<endl;
    hello();
    Lia::hello2();
    cout<<age2<<endl;
    return 0;
}