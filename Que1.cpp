#include<iostream>
using namespace std;
int main(){
    int n,i,k=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int m[n];
    if(n>0){
        for(i=1;i<=n;i++){
            if(n%i==0){
                m[k]=i;
                k++;
            }
        }
            if(k==2)
            cout<<"It is a prime number.";
            else{
                cout<<"Not a prime number. Factors are: ";
                for(i=0;i<k;i++)
                cout<<m[i]<<" ";
            }
    }
    else
    cout<<"Invalid Number.";
}