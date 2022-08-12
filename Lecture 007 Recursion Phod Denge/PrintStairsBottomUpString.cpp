#include<bits/stdc++.h>
using namespace std;

void printpath(int i,int n,string ans){

        //Base Case
        if(i>n) return ;
        if(i==n){
           cout<<ans<<endl;
           
            return;
        }

        
        printpath(i+1,n,ans + '1');
       
        printpath(i+2,n,ans + '2');
       
        printpath(i+3,n,ans + '3');
       
}

int main(){
     int n;
     cin>>n;
     string ans;
     printpath(0,n,ans);
     return 0;
}