#include<bits/stdc++.h>
using namespace std;

void printpath(int i,int n,vector<int> &ans){

        //Base Case
        if(i>n) return ;
        if(i==n){
           for(auto i: ans){
                cout<<i<<" ";
           }
           cout<<endl;
           
            return;
        }
       
     
        ans.push_back(1);
        printpath(i+1,n,ans);
        ans.pop_back();
        ans.push_back(2);
        printpath(i+2,n,ans);
        ans.pop_back();
        ans.push_back(3);
        printpath(i+3,n,ans );
        ans.pop_back();
}

int main(){
     int n;
     cin>>n;
vector<int> ans;
     printpath(0,n,ans);
     return 0;
}