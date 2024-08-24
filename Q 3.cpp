// Q3 Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Table Number = ";
    cin>>n;
    for(int i=1;i<=10;i++){
       int m=n*i;
       cout<<m<<endl;
    }
}
