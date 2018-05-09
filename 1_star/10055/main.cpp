#include<iostream>

using namespace std;

int main(int argc,char* argvp[])
{
    long long x,y;
    while(cin>>x>>y)
    {
        if(x>y)
            cout<<x-y<<endl;
        else
            cout<<y-x<<endl;
    }
}
