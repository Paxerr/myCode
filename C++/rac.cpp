#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[10000],f[10000];
	set <int> se;
	for( int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for ( int i = n-1 ; i>= 0 ; i--){
		se.insert(a[i]);
		f[i]=se.size();
	}
	int tmp;
	cin >> tmp;
	for ( int i=0 ; i < tmp ; i++){
		int l;
		cin >> l;
		cout << f[l] << endl;
	}
	cout << "hello world!"
	
}