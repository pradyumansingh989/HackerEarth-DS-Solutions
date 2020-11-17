#include<iostream>
#define MAX 50
using namespace std;
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum = 0;
    cout<<"Enter rows and columns of the matrix a:";
    cin>>arows>>acolumns;
    cout<<"Enter the elements of matrix a:"<<endl;
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter rows and columns of the matrix b:";
    cin>>brows>>bcolumns;
    if(brows != acolumns){
        cout<<"Sorry!! we cannot multiply the matrices a and b.";
    }else{
        cout<<"Enter the elements of matrix b:"<<endl;
        for(i=0;i<brows;i++){
            for(j=0;j<bcolumns;j++){
                cin>>b[i][j];
            }
        }
    }
        cout<<endl;
        for(i=0;i<arows;i++){
            for(j=0;j<bcolumns;j++){
                for(k=0;k<brows;k++){
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        cout<<"Resultant Matrix:"<<endl;
        for(i=0;i<arows;i++){
            for(j=0;j<bcolumns;j++){
                cout<<product[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}
