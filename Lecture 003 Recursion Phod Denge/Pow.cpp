#include<bits/stdc++.h>
using namespace std;

double Pow(double x,int n){
    //Base Case
    if(n==0) return 1;

    return x* Pow(x,n-1);
}

int main(){
    double x;
    int n;
    cin>>x>>n;
    double out= Pow(x,n);
    cout<<out<<endl;
}