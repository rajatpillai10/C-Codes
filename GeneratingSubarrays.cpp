#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt","r", stdin) ;
freopen("output.txt","w", stdout) ;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		for(int k=i;k<=j;k++){
			cout<<arr[k]<<" , ";
		}
		cout<<endl;
	}
}
	return 0;
}
