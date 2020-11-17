#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a 2d array:";
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int sum=0;
    //Row Sum
    cout<<"Row sum =";
    for(int i=0;i<a;i++){ //row loop
        for(int j=0;j<b;j++){ //col loop
            sum += arr[i][j];
        }
        cout<<" "<<sum;
        sum = 0;
    }
    cout<<endl;
    //Col Sum
    cout<<"Col sum =";
    for(int j=0;j<b;j++){ //col loop
        for(int i=0;i<a;i++){ //row loop
            sum += arr[i][j];
        }
        cout<<" "<<sum;
        sum = 0;
    }
    return 0;
}
