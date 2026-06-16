#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n ;i++){
	        cin>>arr[i];
	    }
	    int maxe = INT_MIN;
	    int mine = INT_MAX;
	    for(int i = 0 ; i < n ;i++){
	        maxe=max(maxe,arr[i]);
	        mine=min(mine,arr[i]);
	    }
	    cout<<maxe-mine+1<<endl;
	    
	}
}
