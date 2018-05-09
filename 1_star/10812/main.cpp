#include <iostream>
#include <string>

using namespace std;

int main(int argc,char* arg[])
{
    int n;
    cin>>n;
    for(int i=0 ;i < n ;i++)
    {
        float a,b;
        cin>>a>>b;
        if( ((int)a-(int)b)%2 ==1 || a-b<0)
            cout<<"impossible"<<endl;
        else
        {
            int c,d;
            c = a/2-b/2;
            d = a/2+b/2;
            cout<<d<<" "<<c<<endl;
        }
    }
}

