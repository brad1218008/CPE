#include <iostream>

using namespace std;

void print(int w)
{
    switch (w) {
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 0:
            cout<<"Sunday"<<endl;
            break;
            
    }
}

void count(int m,int d)
{
    switch (m) {
        case 1:
            print((d+5)%7);
            break;
        case 2:
            print((d+1)%7);
            break;
        case 3:
            print((d+1)%7);
            break;
        case 4:
            print((d+4)%7);
            break;
        case 5:
            print((d+6)%7);
            break;
        case 6:
            print((d+2)%7);
            break;
        case 7:
            print((d+4)%7);
            break;
        case 8:
            print((d)%7);
            break;
        case 9:
            print((d+3)%7);
            break;
        case 10:
            print((d+5)%7);
            break;
        case 11:
            print((d+1)%7);
            break;
        case 12:
            print((d+3)%7);
            break;
    }
}

int main(int argc,char* arg[])
{
    int n;
    cin>>n;
    for(int i=0 ;i<n ;i++)
    {
        int m,d;
        cin>>m>>d;
        count(m,d);
    }
}
