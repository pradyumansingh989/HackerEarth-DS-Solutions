#include<iostream>
using namespace std;
int path(int a,int b);

int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"Total Path = "<<path(a,b);
    return 0;
}

int path(int a,int b)
{
    if(a==1 || b==1){
        return 1;
    }
    return path(a,b-1) + path(a,b-1);
}
