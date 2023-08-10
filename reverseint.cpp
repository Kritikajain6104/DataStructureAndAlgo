#include<iostream>
using namespace std;
int reverseint (int n){
    static int rev=0;
    if(n==0){
        return rev;
    } 
    int dig=n%10;
    rev=rev*10+dig;
    return reverseint(n/10);



}
int main(){
    int num;
    cout<<"enter a  number"<<endl;
    cin>>num;
    int rev=reverseint(num);
    cout<<"reverse is "<<rev;
    return 0;

}