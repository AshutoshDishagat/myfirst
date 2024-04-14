#include<iostream>
using namespace std;
void dis(char c='*',int cnt=4)
{
    for(int i=1;i<=cnt;i++)
    {
        cout<<c;
    }
    cout<<endl;
}
int main()
{
    int cnt=6;
    cout<<"No argument passed "<<endl;
    dis();
    cout<<"One argument passed "<<endl;
    dis('@');
    cout<<"Both argument passed "<<endl;
    dis('$',8);
    return 0;
}
