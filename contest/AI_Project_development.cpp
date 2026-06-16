#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y,z;
	    cin>>n>>x>>y>>z;
	    //without ai 
	    int t1 = (n+x+y-1)/(x+y);
	   // with ai
	   	 int t2 = 0;
	  if(x*z >= n){
	      t2 = (n+x-1)/(x);
	  }

	  else{
	      int rem = n - (x*z);
	      t2 = z + (rem+(10*y)+x-1)/((10*y)+x);
	  }
	  int ans = min(t1,t2);
	   cout<<ans<<endl;
	}

}
