#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=2;i++){
        cout<<arr[0][i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        cout<<arr[1][i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        cout<<arr[2][i]<<" ";
    }
}