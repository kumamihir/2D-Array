#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

     for(int i=0;i<3;i++){
        int st=0;
        int end=2;
       while(st<=end){
        swap(arr[i][st],arr[i][end]);
        st++;
        end--;
       }
     }
    
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";     
              }
              cout<<endl;
     }


    
}