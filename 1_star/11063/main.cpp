#include <iostream>

using namespace std;

int main(int argc,char* arg[])
{
    int n;
    int t=1;
    while(cin>>n)
    {
        int b[n];
        int s =1;
        int k[20005] = {0};
        for(int i=0 ; i<n ; i++)
        {
            cin>>b[i];
        }
        if(b[0] <= 0)
        {
            //cout<<"1"<<endl;
            s=0;
        }
        for(int i=1 ; i<n ; i++)
        {
            if(b[i-1]>=b[i])
            {
                //cout<<"2"<<endl;
                s=0;
                break;
            }
        }
        int r;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i ; j<n ; j++)
            {
                r = b[i]+b[j];
                if(k[r] != 0)
                {
                    //cout<<"3"<<endl;
                    s =0;
                    break;
                }
                else
                    k[r] = 1;
            }
        }
        cout<<"Case #"<<t;
        if(s)
            cout<<": It is a B2-Sequence."<<endl<<endl;
        else
            cout<<": It is not a B2-Sequence."<<endl<<endl;
            
            t++;
    }
}
