#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int a,b,x;
	cin>>a>>b>>x;
	vector<int> A;
	vector<int> B;
	int curr = a;
	while(true){
	    A.push_back(curr);
	    if(curr == 0) break;
	    curr = curr/x;
	}
	curr = b;
	while(true){
	    B.push_back(curr);
	    if(curr == 0) break;
	    curr = curr/x;
	}
	int ans = INT_MAX;
	for(int i = 0 ; i < A.size() ; i++){
	    for(int j = 0 ; j < B.size() ; j++){
	       ans = min(ans,i+j+abs(A[i]-B[j]));
	    }
	}
	cout<<ans<<endl;}
	

}
