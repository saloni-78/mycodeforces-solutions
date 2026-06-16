#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    int arr[n];
	    int count = 0;
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	        if(arr[i] == 2) count++;
	    }
	    if(count & 1){
	        cout<<-1<<"\n";
	        continue;
	    }
	    bool found = false;
	    int x = count;
	    for(int i = 0 ; i < n ; i++ ){
	        if(arr[i] == 2){
	            count--;}
	            if(count == x/2){
	                found = true;
	                cout<<i+1<<"\n";
	                break;
	            }
	        }
	    if(!found) cout<<-1<<"\n";
	}

}
