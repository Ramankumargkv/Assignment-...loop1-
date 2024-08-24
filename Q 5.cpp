// Q5 Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main()
{
    int m=3;
    int n;
    cout<<"Enetr the No of terms in Gp = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<m <<" ";
        m=m*4;
    }

}