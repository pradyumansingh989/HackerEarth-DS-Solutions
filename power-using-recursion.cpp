#include<iostream>
using namespace std;
int pow(int a,int b);

int main()
{
    int a,b;
    cout<<"Enter the number and its power:";
    cin>>a>>b;
    cout<<"Answer is = "<<pow(a,b);
    return 0;
}

int pow(int a,int b)
{
    if(b==0){
        return 1;
    }

    return a * pow(a,b-1);
}
