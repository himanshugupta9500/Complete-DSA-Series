#include<bits/stdc++.h>
using namespace std;

int ways(int n){
    //Base case
    if(n<=2) return n;
    if(n==3) return 4;

    return ways(n-1) + ways(n-2) + ways(n-3);
}
int main(){
    int n;
    cin>>n;
    int ans= ways(n);
    cout<<ans<<endl;
    return 0;
}