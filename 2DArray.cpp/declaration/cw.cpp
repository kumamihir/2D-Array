#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<" enter the row matrix:";
    cin>>n;
    int m;
    cout<<"enter the coloumn matrux : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}