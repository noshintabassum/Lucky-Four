#include<iostream>
using namespace std;
int main(){

    int t;
    cout<<"enter test case : ";
    cin>>t;

    for(int i=1; i<=t; i++){

        int num;
        cout<<"enter a number : ";
        cin>>num;
        int count=0;
        int temp=num;
        while(temp!=0){

            int r= temp%10;

            if(r==4){
                count++;
            }
            temp = temp/10;
        }
        cout<<"number of 4's : "<<count;
        cout<<endl;
    }
}
