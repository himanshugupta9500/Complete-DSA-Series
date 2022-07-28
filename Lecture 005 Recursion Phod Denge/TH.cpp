#include<bits/stdc++.h>
using namespace std;

void TH(int n,char A,char B,char C){
    //Base Case
    if(n==1){
        cout<<"move disk from "<<A<<" to "<<C<<endl;
        return;
    }

    TH(n-1,A, C,B);
    cout<<"move disk from"<<A<<" to "<<C<<endl;
    TH(n-1,B,A,C);
}


int main(){
    int n;
    cin>>n;
    TH(n,'A','B','C');
    return 0;
}