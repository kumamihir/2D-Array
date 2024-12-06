#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the 1st row matrix : ";
    cin>>m;
     int n;
    cout<<"Enter the 1st coln matrix : ";
    cin>>n;

     int p;
    cout<<"Enter the 2nd row matrix : ";
    cin>>p;

     int q;
    cout<<"Enter the 2nd coln matrix : ";
    cin>>q;
    if(n==p){

    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[p][q];
        }
    }
    }
   
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;

                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
                cout<<endl;
            }
        }
            

        
        //print;
         int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
               cout<<res[i][j]<<" ";

    }
        }
}


