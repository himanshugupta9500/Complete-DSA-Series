#include<bits/stdc++.h>
using namespace std;

void printpath(int n,string ans){

        //Base Case
       if(n<0) return ;
        if(n==0){
            cout<<ans<<endl;
            return ;                  
        }
        

        
        printpath(n-1,ans + '1');
       
        printpath(n-2,ans + '2');
        
        printpath(n-3,ans + '3');
     
}

int main(){
     int n;
     cin>>n;
     string ans;
     printpath(n,ans);
     return 0;
}