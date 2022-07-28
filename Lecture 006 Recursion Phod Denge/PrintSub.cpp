#include<bits/stdc++.h>
using namespace std;

void printSub(int i,vector<int> &v,vector<int> &ans,int n){
    //Base case
    if(i>=n){
        for(auto ele : ans){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(v[i]);
    printSub(i+1,v,ans,n);
    ans.pop_back();
    printSub(i+1,v,ans,n);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n); //input
    vector<int> ans;  //Output
    for(int i=0;i<n;i++)
        cin>>v[i];
    printSub(0,v,ans,n);
    return 0;
}