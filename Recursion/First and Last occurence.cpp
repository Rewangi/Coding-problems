#include<iostream>
using namespace std;
int lastOcc(int *a,int n,int key){
//here first we make a call and after that we look on current index..
//base case
if(n==0){
return -1;
}
//rec case
int i = lastOcc(a+1,n-1,key);
if(i == -1){
    if (a[0]==key){
        return 0;
    }
    else{
        return -1;
    }
}
    return i+1;

}


int firstOcc(int *a,int n,int key){
    //base case
    if(n==0){
        return 0;

    }
    //recursive case
        // first we look on current index than we will make a call
        if (a[0]==key ){
            return 0;
        }
        int i = firstOcc(a+1,n-1,key);
        if(i==-1){
            return -1;
        }
        return i+1;

    }

int linear_search(int *a,int i, int n, int key){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    if(a[i]== key){
        return i;
    }
    return linear_search(a,i+1,n,key);
}


int main(){
    int arr[]={1,2,3,7,4,5,6,7,16};
    int key = 7;
    int n = sizeof(arr)/sizeof(int);
    cout<<lastOcc(arr, n, key)<<endl;
    cout<<firstOcc(arr, n, key)<<endl;
    return 0;
}

