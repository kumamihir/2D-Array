#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"enter  the no of columns : ";
    cin>>n;
    int arr[m][n];
    int sum=0;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }   
    }
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           sum+=arr[i][j];
        }   
    }
    cout<<sum;
}