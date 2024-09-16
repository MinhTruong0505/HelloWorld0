#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int x){
	int L=0;
	int R=n-1;
	while(L <=R){
		int m =L+ (R-L)/2;
		if(a[m] < x ){
			L = m+1;
		}
		else if(a[m] > x){
			R = m-1;
		}
		else{
		 return m;}
	}
	return -1;
}
int main(){
	int n;
	int a[1000000];
	int x;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	cin >> x;
	int k = binarysearch(a, n, x);
	if(k!= -1){
	
	cout << k << " " << k+1;}
	else {
	cout << k;}
	return 0;
}
