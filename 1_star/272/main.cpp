#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char* arg[])
{
    string line;
    int odd = 1;
   while(getline(cin,line))
   {
       for(int i=0 ;i <line.length() ; i++)
       {
           if(line[i]=='\"')
           {
               if(odd)
               {
                   cout<<"``";
                   odd=0;
               }
               else
               {
                   cout<<"\'\'";
                   odd=1;
               }
               continue;
           }
           cout<<line[i];
       }
       cout<<endl;
   }
}
