#include<iostream>
#define MAX 100000000

using namespace std;

int main(int argc,char* argv[])
{
    int total;
    cin>>total;
    for(int i=0;i<total;i++)
    {
        int r=0;
        cin>>r;
        int s[r];
        for(int j=0;j<r;j++)
        {
            cin>>s[j];
        }
        int min=MAX;
        for(int j=0;j<r;j++)
        {
            int sum=0;
            for(int k=0;k<r;k++)
            {
                if(s[j]>s[k])
                    sum+=s[j]-s[k];
                else
                    sum+=s[k]-s[j];
            }
            if(sum < min)
                min = sum;
        }
        cout<<min<<endl;
    }
}
