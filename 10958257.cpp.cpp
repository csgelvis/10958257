#include<iostream>
using namespace std;
int main(){
    int num,i,j,sum=0;
    cout<<"enter a number value"<<endl;
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            sum=sum+1;
            cout<<i<<",";
        }
    } cout<<""<<endl<<endl;
    cout<<"sum of all prime numbers  between 1 to"<<num<<" = "<<sum;
}