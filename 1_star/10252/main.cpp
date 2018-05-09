#include <iostream>
#include <string>

using namespace std;

int main(int argc,char* arg[])
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        if(a == ""  || b == "")
        {
            cout<<endl;
            continue;
        }
        for(int i=0 ; i<a.length()-1 ; i++)
        {
            for(int j = i+1 ; j<a.length() ; j++)
            {
                if(a[i] > a[j])
                {
                    //cout<<"1"<<endl;
                    char temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i=0 ; i<b.length()-1 ; i++)
        {
            for(int j = i+1 ; j<b.length() ; j++)
            {
                if(b[i] > b[j])
                {
                    //cout<<"1"<<endl;
                    char temp;
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        //cout<<"k"<<endl;
        //cout<<a<<endl;
        //cout<<b<<endl;
        int i=0,j=0;
        while(i<a.length() && j<b.length())
        {
            if(a[i] == b[j])
            {
                cout<<a[i];
                i++;
                j++;
            }
            else if(a[i] > b[j])
                j++;
            else
                i++;
        }
        cout<<endl;
        a="";
        b="";
    }
}
