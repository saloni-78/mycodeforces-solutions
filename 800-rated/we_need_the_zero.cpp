#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    vector<int> a(n);
	    int x = 0;
	    for(int i = 0 ; i < n ; i++){
	        cin>>arr[i];
	        x = x ^ arr[i];
	    }
	    if(n & 1){
	        cout<<x<<endl;
	    }
	    else{
	        if(x == 0) cout<<x<<"/n";
	    }
	    else{
	        cout<<-1<<"/n";
	    }
	    
	    
	    }

}
