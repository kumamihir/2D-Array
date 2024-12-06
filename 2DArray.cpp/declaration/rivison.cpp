#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // for(int i=0;i<=3;i++){
    //     for(int j=0;j<=3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
 // max


//     int n;
//     cout<<"enter the row no : ";
//     cin>>n;
//     int m;
//     cout<<"enter the columns no : ";
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             if(max<arr[i][j])  max=arr[i][j];
//         }
//     }
//     cout<<max;


int m;
cout<<" enter the row number 1: ";
cin>>m;
int n;
cout<<" enter the column number 1 : ";
cin>>n;
int arr[m][n];
for(int i=0;i<=m-1;i++){
    for(int j=0;j<=n-1;j++){
        cin>>arr[i][j];
    }
}
int m1;
cout<<" enter the row number 2 : ";
cin>>m;
int n2;
cout<<" enter the column number 2 : ";
cin>>n;
int arr2[m][n];
for(int i=0;i<=m1-1;i++){
    for(int j=0;j<=n2-1;j++){
        cin>>arr2[i][j];
    }
}
int res[m][n];
for(int i=0;i<=m-1;i++){
    for(int j=0;j<=n-1;j++){
        res[i][j]=arr[i][j]+arr2[i][j];
    }
}
//print;
for(int i=0;i<=m-1;i++){
    for(int j=0;j<=n-1;j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}


 }
