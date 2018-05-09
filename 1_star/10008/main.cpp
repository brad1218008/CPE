#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;
int convert(char a)
{
    return toupper(a) - 'A';
}
int main(int argc,char* arg[])
{
    int n;
    cin>>n;
    string line;
    cin.get();
    int max=0;
    int k[26] = {0};
    for(int i=0 ; i<n ; i++)
    {
        line = "";
        getline(cin,line);
        for(int j=0 ; j<line.length();j++)
        {
            if((line[j] >=65 && line[j]<=90) || (line[j]>=97 && line[j]<=122))
            {
                int t = ++k[convert(line[j])];
                if(t>max)
                    max = t;
            }
        }
    }
    for(int i=max ; i>0 ; i--)
    {
        for(int j=0 ; j<26 ; j++)
        {
            if(k[j] == i)
            {
                char a = j+ 'A';
                cout<<a<<" "<<i<<endl;
            }
        }
    }
}
