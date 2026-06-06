#include <bits/stdc++.h>
using namespace std;

int main() {
     int t ;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int countOdd = 0;
         vector<int> arr(n);
         for(int i = 0 ; i < n ;i++){
             cin>>arr[i];
             if(arr[i] % 2 == 1) countOdd++;
         }
         if(countOdd % 2 == 1) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
     }
     return 0;

}
