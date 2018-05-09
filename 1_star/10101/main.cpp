#include <iostream>
#include <iomanip>
using namespace std;
void count(long long int n)
{
    if( n == 0)
        return;
    if(n/10000000)
    {
        count(n/10000000);
        cout<<(" kuti");
        n %= 10000000;
    }
    if(n/100000)
    {
        count(n/100000);
        cout<<(" lakh");
        n %= 100000;
    }
    if(n/1000)
    {
        count(n/1000);
        cout<<(" hajar");
        n %= 1000;
    }
    if(n/100)
    {
        count(n/100);
        cout<<(" shata");
        n %= 100;
    }
    if(n)
        cout<<" "<<n;
}
int main(int argc,char* arg[])
{
    long long int n;
    int num = 1;
    while(cin>>n)
    {
        //cout<<n<<endl;
        cout<<setw(4)<<num<<".";
        if(n)
            count(n);
        else
            cout<<" 0";
        cout<<endl;
        num++;
    }
}
