#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc,char* arg[])
{
    int s;
    cin>>s;
    for(int i=0 ;i<s ; i++)
    {
        int player;
        double pro;
        int num;
        cin>>player>>pro>>num;
        double ans = 0.0;
        double k = 0.0;
        if(num == 1)
        {
            ans = pro;
            k = pro;
        }
        else
        {
            ans = pow((1-pro),(num-1))*pro;
            k = ans;
        }
        for(int j=1 ; j<100 ;j++)
        {
            ans += k*pow((1-pro),j*player);
        }
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
    
}

