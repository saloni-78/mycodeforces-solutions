#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>>t;
	while(t--){
	    long long n ;
	    cin>>n;
	    long long a = n%12;
	    if(a==10){
	        a=22;
	    }
	    if(n<a) {cout<<-1<<endl;
	    continue;}
	
	cout<<a<<" "<<n-a<<endl;}

}
