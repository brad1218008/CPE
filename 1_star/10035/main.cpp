#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
    long long x,y;
    
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
            break;
        int sum=0;
        int carry=0;
        while(x!=0 || y!=0)
        {
            if((x%10 + y%10 + carry) >= 10)
            {
                sum++;
                carry = 1;
            }
            else
                carry = 0;
            x/=10;
            y/=10;
        }
        if(sum==0)
            cout<<"No carry operation."<<endl;
        else if(sum==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<sum<<" carry operations."<<endl;
        
    }
}
