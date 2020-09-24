#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
    
}
