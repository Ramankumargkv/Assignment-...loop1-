// Q4 Display this AP - 4,7,10,13,16.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main(){
    int  m=4;
    int n; 
    cout<<"No of Terms of Ap = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<m<<" ";
        m=m+3;
    }
}