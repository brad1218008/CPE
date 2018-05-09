#include <iostream>

using namespace std;

long long int fun(long long int k)
{
    long long int sum=0;
    while(k/10)
    {
        sum += k%10;
        k /= 10;
    }
    sum += k;
    return sum;
}

int main(int argc,char* arg[])
{
    long long int k;
    while(cin>>k)
    {
        if(k == 0)
            break;
        k = fun(k);
        k = fun(k);
        k = fun(k);
        cout<<k<<endl;
        
    }
}
