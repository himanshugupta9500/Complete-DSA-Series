#include<bits/stdc++.h>
using namespace std;

void print(int idx,int n,vector<int> &input,int &sum,vector<int> &ans){

    //pick and not pick 
    
    //Base Case
    // if(i==n) {
    //     ans.push_back(sum);
    //     return ;
    // }
    
    // //pick 
    // sum+=input[i];
    // print(i+1,n,input,sum,ans);

    // //not pick 
    // sum-=input[i];
    // while(i<n and input[i] == input[i+1]) i++;  //skip those who are same
    // print(i+1,n,input,sum,ans);


     //chance and no chance 

    ans.push_back(sum);
     for(int i=idx;i<n;i++){
        if(i>idx and input[i]==input[i-1]) continue; //skip 
        sum+=input[i];
        print(i+1,n,input,sum,ans);  //chance 
        sum-=input[i];
     }
}
vector<int> subsetsum(vector<int> &input){
        vector<int> ans;
        int sum=0;
        int n= input.size();
        sort(input.begin(),input.end());
        print(0,n,input,sum,ans);
        return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    vector<int> ans = subsetsum(input);

    for(auto i:ans){
        cout<<i<<" ";
    }
}