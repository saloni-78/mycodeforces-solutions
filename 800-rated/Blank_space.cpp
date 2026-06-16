#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        int countZero = 0;
        int maxlen = 0;
         for(int i = 0 ; i < n ; i++){
           if(a[i] == 0){
               countZero++;
           }
           else{
               countZero = 0;
           }
           maxlen = max(maxlen,countZero);
        }
        cout<<maxlen<<endl;
        
    }

}
