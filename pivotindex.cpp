#include<iostream>
using namespace std;
int pivotindex(int arr[],int n){
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int start =0,end=n-1;
    int mid=start+(end-start) /2;
    int pivot=-1;
    while(start<end){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start) /2;
    }
    pivot=start;
    return pivot;

}
int main(){
     int arr[]={5, 8,9,2,3,4};
     int index= pivotindex(arr,5);
     cout<<"ans is "<<index;
     return 0;

}