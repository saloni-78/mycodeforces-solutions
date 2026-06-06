#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long>input(n);
	    for(int i = 0; i<n;i++){
	        cin>>input[i];
	    }
	    vector<long long> b;
	    vector<long long> c;
	    long long max_ele = *max_element(input.begin(), input.end());
	    for(auto it : input){
	        if(it==max_ele){
	            c.push_back(it);
	        }
	        else{
	            b.push_back(it);
	        }
	    }
	    if(b.size() == 0) {
	        cout<<-1<<endl;
	        continue;}
	    cout<<b.size()<<" "<<c.size()<<endl;
	    for(auto it : b){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	     for(auto it : c){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;

}
