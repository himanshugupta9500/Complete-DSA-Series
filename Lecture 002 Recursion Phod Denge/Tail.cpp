#include<iostream> 
using namespace std;

void func(int n){
    //Base Case
    if(n==0) 
        return ;
    
    //Tumhara kaam 
    cout<<n<<endl;
    
    //Bharosa(trust)
    func(n-1);
}

int main(){
    int n;
    cin>>n;
    func(n);
}