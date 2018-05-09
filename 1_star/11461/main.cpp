#include <iostream>

using namespace std;

int main(int argc,char* arg[])
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b ==0)
            break;
        int ans = 0;
        for(int i=1;i<350;i++)
        {
            int s = i*i;
            if(s > b)
                break;
            if(s>=a && s<=b)
                ans++;
            
        }
        cout<<ans<<endl;
    }
}
