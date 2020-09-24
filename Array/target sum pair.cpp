
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m,k;
	cin>>m;

	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];

	}
	cin>>k;
	sort(a,a+m);
	int i=0;
	int j=sizeof(a)/sizeof(int)-1;
	while(i<j){
		int sum =a[i]+a[j];
		if (sum<k){
			i++;
		}
		else if (sum>k){
			j--;
		}
		else if(sum == k){
			cout<< a[i] << " and " << a[j] <<endl;
			i++;
			j--;

		}
	}
	return 0;
	
}
