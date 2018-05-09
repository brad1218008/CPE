#include <iostream>

using namespace std;

int main(int argc,char* arg[])
{
    int n;
    while(cin>>n)
    {
        for(int i=0 ;i<n ;i++)
        {
            int a,b;
            cin>>a>>b;
            int sum=0;
            for(int j=a;j<=b;j++)
            {
                if (j%2 == 1)
                    sum += j;
            }
            cout<<"Case "<<i+1<<": "<<sum<<endl;
        }
    }
}
