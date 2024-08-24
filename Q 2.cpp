// Q2 Print all numbers from 1 to 100 that are divisible by 3
#include<iostream>
using namespace std;
int main(){
    cout<<"All Numbers from 1-100 which is Divisible by 3 = ";
    for(int i=1;i<=100;i++){
        if(i%3==0){
            cout<<i<<" ";
        }
    }
}