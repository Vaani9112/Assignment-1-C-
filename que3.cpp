#include<iostream>
#include<string>
using namespace std;
int main(){
    string st,wss,sw="";
    char c,c1;
    int i,j,l,k=1;

    //a.
    cout<<"Enter a String: ";
    getline(cin,st);
    

    //b.
    l=st.length();
    for(i=0;i<l;i++){
        c=st.at(i);
        if(c!=' ')
        wss += tolower(c);
    }

    l=wss.length();
    for(i=l-1;i>=0;i--){
        c=wss.at(i);
        sw+=c;
    }

    if(wss==sw)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;


    //c.
    cout<<"Frequencies of each chracter: "<<endl;
    l=st.length();
    for(i=0;i<l;i++)
        st.at(i)= tolower(st.at(i));

    for(i=0;i<l;i++){
        c=st.at(i);
        if(c != ' '){
        for(j=i+1;j<l;j++){
            c1=st.at(j);
            if(c==c1){
            k++;
            st.at(j)=' ';
        }
        }
        cout<<c<<": "<<k<<endl;
        k=1;
    }
    }
}