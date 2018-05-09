#include <iostream>

using namespace std;

int main(int argc,char* arg[])
{
    string num;
    while(cin>>num)
    {
        if(num == "0")
            break;
        //cout<<num.length()<<endl;
        int odd=0;
        int even=0;
        for(int i=num.length()-1 ; i>=0 ; i--)
        {
            if(i%2 == 1)
                odd += num[i]-'0';
            else
                even += num[i]-'0';
        }
        int sum =0;
        if(odd > even)
            sum = odd - even;
        else
            sum = even - odd;
        if(sum%11 == 0)
            cout<<num<<" is a multiple of 11."<<endl;
        else
            cout<<num<<" is not a multiple of 11."<<endl;
                
    }
}
