#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    //Base Case
    if(n<=1) return n;

    //Bharosa
    int prev= fib(n-1);
    int pprev= fib(n-2);

    //Tumhara kaam
    return prev + pprev;
}
int main(){
    int n;
    cin>>n;
    int ans= fib(n);
    cout<<ans<<endl;
}