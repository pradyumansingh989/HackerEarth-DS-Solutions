#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        bool duplicate = false;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                duplicate =  true;
                break;
            }
        }
        if(duplicate==true){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {2,4,6,8,6};
    cout<<"The Repeated/Duplicate digit is =";
    cout<<" "<<findDuplicate(arr,5);
    return 0;
}
