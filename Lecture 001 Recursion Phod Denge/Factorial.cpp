#include<iostream>
using namespace std;

long long fact(int n){
    if(n==0) return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    
    long long ans= fact(n);

    cout<<"factorial of "<<n<<" is: "<<ans<<endl;

    return 0;
}