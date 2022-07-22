#include<iostream> 
using namespace std;

void func(int i,int n){
    // Base case
    if(i>n) 
        return ;

    //tumhara kam
    cout<<i<<endl;
    
    //Bharosa(trust)
    func(i+1,n);

}
int main(){
    int n;
    cin>>n;
    func(1,n);
}