#include <iostream>
using namespace std;
//Inversion count 

 // function to merge two parts of array
 int merge( int *a, int s, int e){
     int mid = (s+e)/2;
     int i = s; // pointerr i points to start point
     int j = (mid+1);
     int k = s; 
     int temp[100000];
     int cnt = 0;//cross inversions
     while(i<=mid and j<=e){
         if(a[i]<=a[j]){
             temp[k]=a[i];
             k++;
             i++;
         }
         else{
             temp[k++] = a[j++];
             cnt += mid-i+1;

         }
     }
     //fill the array if some eleemeents are left in  one of the array
     while(i<=mid){
         temp[k++] = a[i++];
     }
     while(j<=e){
         temp[k++] = a[j++];
     }
     //copy all elements back to an original aray
     for(int i=s;i<=e;i++){
         a[i] = temp[i];
     }
     return cnt;

 }

int inversion_count(int *a,int s,int e){
    //base  case
    if(s>=e){
        return 0;
    }
    //merge sort
    int mid = (s+e)/2;
    int x = inversion_count(a, s, mid);
int y = inversion_count(a, mid+1, e);
// here we count number of cross inversion that is given by merge function
int z = merge(a,s,e);
return x + y + z; // final answer
}







int main() {
    int arr[] = {1,5,2,6,3,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<inversion_count(arr,0,n-1)<<endl;
    return 0;
}

