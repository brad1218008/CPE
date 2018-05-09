#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char* arg[])
{
    char line[102][102]={0};
    int k=0;
    int m=0;
   while(gets(line[k]))
   {
       m = max(m,(int)strlen(line[k]));
       k++;
   }
    for(int i=0; i<m ;i++)
    {
        for(int j=k-1 ; j>=0 ; j--)
        {
            if(line[j][i]==0)
            {
                cout<<" ";
                continue;
            }
            cout<<line[j][i];
                
        }
        cout<<endl;
    }
}
