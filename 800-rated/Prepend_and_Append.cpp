#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int n; 
	cin>>n;
	string s;
	cin>>s;
	int i = 0;
	int j = n-1;
    while(i<j){
        if(s[i] == '0' && s[j] == '0' ){
            break;
        }
        else if(s[i] == '1' && s[j] == '1'){
            break;
        }
        else{
            i++;
            j--;
        }
    }
    if(i>j) cout<<0<<"\n";
    else    cout<<j-i+1<<"\n";
}
    

}
