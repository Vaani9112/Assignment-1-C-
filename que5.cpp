#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;

    int m[n][n];int p[n][n];
    cout<<"Enter values: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cin>>m[i][j];
    }
    }

    cout<<"Actual matrix: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout<<m[i][j]<<" ";
        cout<<endl;
    }

   for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            int temp= m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=temp;
        }
    }
int k;
    for(i=0;i<n;i++) {
        for(j= 0,k=n-1;j<k;j++,k--) {
            int temp= m[i][j];
            m[i][j]=m[i][k];
            m[i][k]=temp;
        }
    }

    cout<<"Rotated matrix: "<<endl; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout<<m[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
