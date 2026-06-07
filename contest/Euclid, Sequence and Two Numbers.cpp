#include <bits/stdc++.h>
using namespace std;

int main() {
  int t ;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<long long> seq(n);
      for(int i = 0 ; i < n ; i++){
          cin>>seq[i];
      }
      long long x;
      long long y;
      if(n == 2){
        if(seq[0] > seq[1]){
            cout<<seq[0] << " " << seq[1] << endl;
        }
        else{
            cout<<seq[1] << " " << seq[0] << endl;
        }
        continue;
      }
      sort(seq.begin(),seq.end(),greater<long long>());
      bool present = true;
      for(int i = 2 ; i < n ; i++){
          if(seq[i] != seq[i-2] % seq[i-1]){
              present = false;
              break;
          }
      }
      if(present){
       cout<<seq[0] << " " << seq[1] << endl;}
       else{
           cout<<-1<<endl;
       }
      
  }

}
