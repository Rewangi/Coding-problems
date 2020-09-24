#include <iostream>
using namespace std;
void bubble_sort(int a[],int n){
    //in bubble sort function in one iteration one element is sorted so n elements will get  sorted in n-1 iteration
    for(int i=1;i<=n-1;i++){
        //pair wise swapping always start with index 0 
        for(int j=0;j<=(n-i-1);j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);

            }
        }
    }
}
int main (){
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}