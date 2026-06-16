#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
       int n ;
       cin >> n;
       vector<int> arr(n);
       for(int i = 0 ; i < n ; i++){
           cin>>arr[i];
       }
       int countn = 0;
       for(int i = 0 ; i < n ; i++){
          if(arr[i] == -1) countn++;
       }
       int countp = n - countn;
       if(countp >= countn ){
           if((countn & 1) == 1){
               cout<<1<<endl;
           }
           else{
               cout<<0<<endl;
           }
       }
       else {
           int count = 0;
            while(countp < countn){
               countp +=1 ;
               countn -= 1;
               count++;
            }
            if(countn % 2 == 0){
                cout<<count<<endl;
            }
            else{
                cout<<count+1<<endl;
            }
           }
       }
       
   }


