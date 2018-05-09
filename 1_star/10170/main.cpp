#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc,char* arg[])
{
    long long int s ,d;
    while(cin>>s>>d)
    {
        for(long long int i=0 ; i<d ; s++)
        {
            i += s;
        }
        cout<<--s<<endl;
    }
}

∑
