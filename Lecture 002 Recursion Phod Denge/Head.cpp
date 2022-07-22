#include<iostream> 
using namespace std;

void func(int n){
    // Base case
    if(n==0) 
        return ;
    
    //Bharosa(trust)
    func(n-1);

    //tumhara kam
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    func(n);
}