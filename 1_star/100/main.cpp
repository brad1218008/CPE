#include<iostream>


using namespace std;

int problem(int i)
{
    int times = 1;
    while(i!=1)
    {
        if(i%2==1)
            i = 3*i+1;
        else
            i /=2;
        times++;
    }
    return times;
}

int main(int argc,char* argv[])
{
    long x,y;
    while(cin>>x>>y)
    {
        long m = x;
        long n = y;
        if(x>y)
        {
            long temp = x;
            x = y;
            y = temp;
        }
        long max=0;
        for(int i=x ; i<=y ; i++)
        {
            long ans = problem(i);
            if(ans > max)
                max = ans;
        }
        cout<<m<<" "<<n<<" "<<max<<endl;
    }
}
