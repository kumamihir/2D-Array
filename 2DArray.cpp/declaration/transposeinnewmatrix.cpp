#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"enter the no of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int t[n][m];
    //store
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
           t[i][j]=arr[j][i];
        }
        
    }
     for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    
}