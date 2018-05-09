#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct total{
    string name;
    int x;
    total(string n,int y)
    {
        name = n;
        x = y;
    }
};

int main(int argc,char* arg[])
{
    int n;
    cin>>n;
    string line[n];
    cin.get();
    vector<total> con;
    for(int i=0 ; i<n ; i++)
    {
        getline(cin,line[i]);
        string temp = "";
        for(int j=0 ; j<75 ; j++)
        {
            temp += line[i][j];
            if(line[i][j] == ' ')
            {
                //cout<<temp<<endl;
                if(con.empty())
                {
                    con.push_back(total(temp,1));
                    //cout<<"1"<<endl;
                }
                else{
                    for(vector<total>::iterator it = con.begin(); it != con.end() ; it++)
                    {
                        if(it->name == temp)
                        {
                            it->x++;
                            break;
                        }
                        if(it == con.end()-1)
                        {
                            con.push_back(total(temp,1));
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    for(vector<total>::iterator it = con.begin(); it != con.end()-1 ; it++)
    {
        for(vector<total>::iterator iter = it+1; iter != con.end() ; iter++)
        {
            //cout<<"0"<<endl;
            if(iter->name < it->name)
            {
                //cout<<"1"<<endl;
                total temp = total("",0);
                temp = *it;
                *it = *iter;
                *iter = temp;
            }
        }
    }
    for(vector<total>::iterator it = con.begin(); it != con.end() ; it++)
    {
        cout<<it->name<<it->x<<endl;
    }

}
