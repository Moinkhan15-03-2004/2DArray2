// Write a program to print the multjiplication  of two matrices given by the user
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of 1st matrix";
    cin>>m;
     int n ;
    cout<<"Enter colummn of 1st matrix";
    cin>>n;
    
    int p;
    cout<<"Enter rows of 2nd matrix";
    cin>>p;
    int q ;
    cout<<"Enter coloum of 2nd matrix";
    cin>>q;

    if(n==p){
            int a[m][n];
    cout<<"Enter element of 1st matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
      

       int b[p][q];
       cout<<"Enter of element of 2nd matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }
    // resultant matrix
    int res[m][q];
    // filling 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            // res[i][j]
            res[i][j]=0;
            // res[i][j]= a
            for(int k=0;k<p;k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    // print 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;

    }
    }
    else {
        cout<<"The matrices cannot be multiplied";
    }

}