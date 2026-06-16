#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i = 1 ; i <= n ; i++){
	        cout<< i << " ";
	    }
	    for(int i = 1 ; i <= n ; i++){
	        cout<< i << " ";
	    }
	    if(n%2 == 0){
	        for(int i = n ; i >= 1 ; i--){
	            cout<< i << " ";
	        }}
	   else{
	       for(int i = 2 ; i <= n ; i++){
	           cout<< i << " ";
	       }
	       cout<< 1 << " ";
	   }
	    for(int i = 1 ; i <= n ; i++){
	        cout<< i << " ";
	    }
	    cout<<endl;
	 
	    
	}
	    


}
