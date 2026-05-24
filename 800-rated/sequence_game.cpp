#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> input(n);
	    for(int i=0;i<n;i++){
	        cin>>input[i];
	    }
	    vector<long long> ans;
	    int i = 1;
	    ans.push_back(input[0]);
	    while(ans.size() < 2*n && i<n ) {
	       if(input[i-1] <= input[i]){
	           ans.push_back(input[i]);
	       }
	       else{
	           ans.push_back(input[i]);
	           ans.push_back(input[i]);
	           
	       }
	       i++;
	    }
	    cout<<ans.size()<<endl;
	    for(int i=0; i<ans.size();i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	    
	        
	    }
	    
	

}
