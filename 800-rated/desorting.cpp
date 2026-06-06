#include <bits/stdc++.h>
using namespace std;

int main() {
  int t ;
  cin>>t;
  while(t--){
      int n ;
      cin>>n;
      vector<long long> a(n);
      for(int i = 0 ; i < n ; i++ ){
          cin>>a[i];
      }
      long long mimo = LLONG_MAX;
      bool change = true;
      for(int i = 1 ; i < n ; i++ ){
          if(a[i-1] > a[i]) {
              cout<<0<<endl;
              change = false;
              break;
          }
          else{
             mimo = min(mimo,a[i]-a[i-1]);
          }}
          if(change){
        cout<<(mimo>>1)+1<<endl;}
      }
  }


