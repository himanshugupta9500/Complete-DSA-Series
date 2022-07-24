#include<bits/stdc++.h>
using namespace std;

double Pow(double x,int n){
    //Base Case
    if(n==0) return 1;



    //Tumhara kaam 

    if(n%2==0) //even 
    {
        return Pow(x,n/2)*Pow(x,n/2);

    }
    return Pow(x,n/2) * Pow(x,n/2) * x;
}

int main(){
    double x;
    int n;
    cin>>x>>n;
    double out= Pow(x,n);
    cout<<out<<endl;
}