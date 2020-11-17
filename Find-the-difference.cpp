#include<iostream>
using namespace std;

int main(){
    int n,diff;
    cin>>n;
    int arr[1000];
    int i, sum1=0, sum2=0;
    for(i=0;i<n;i++){
        if(i%2==0){
            cin>>arr[i];
            sum1 += arr[i];
        }else{
            cin>>arr[i];
            sum2 += arr[i];
        }
    }
    diff = sum1-sum2;
    cout<<"The difference is:"<<diff;
}
