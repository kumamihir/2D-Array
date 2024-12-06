#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row no : ";
    cin>>m;
    int n;
    cout<<"enter the column no : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";   
    }
    cout<<endl;
    }
    for(int j=0;j<=n-1;j++){
        for(int i=0;i<=m-1;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}