#include <iostream>
#include <cstring>

using namespace std;


int main(int argc,char* arg[])
{
    int T;
    cin>>T;
    for(int i=0 ; i<T ; i++)
    {
        char a = getchar();
        string ns;
        getline(cin,ns);
        string temp  = "";
        for(int j=4 ; j<ns.length() ; j++)
        {
            temp += ns[j];
        }
        int n = stoi(temp);
        long long m[n][n];
        for(int j=0 ; j<n ; j++)
        {
            for(int k=0 ; k<n ; k++)
            {
                cin>>m[j][k];
            }
        }
        int s = 1;
        int j,k;
        for(j=0 ; j<n ; j++)
        {
            for(k=0 ; k<n ; k++)
            {
                if(m[j][k] < 0)
                {
                    s = 0;
                    break;
                }
                if(m[j][k] != m[n-1-j][n-1-k])
                {
                    s = 0;
                    break;
                }
            }
        }
        cout<<"Test #"<<i+1<<": ";
        if(s)
            cout<<"Symmetric."<<endl;
        else
            cout<<"Non-symmetric."<<endl;
    }
}
