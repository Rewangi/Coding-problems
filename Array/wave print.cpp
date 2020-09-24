#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

    cin>>a[i][j];
    }
    }
    //iterating over columns
    for(int j=0;j<m;j++){
        //for odd columns printing elements of rows from max row to min row 
//for even columns printing elements of rows from min row to max row
//Thus forming a wave pattern.
        if(n%2!=0){
            //for odd column
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<", ";
            }
        
            }
            else {
                for(int i=0;i<n;i++){
                    cout<<a[i][j]<<", ";
                }
            }

      cout << "END" <<endl;  
    }
}

