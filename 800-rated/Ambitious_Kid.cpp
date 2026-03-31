#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
 int n;
 cin>>n;
 int minn = INT_MAX;
 for(int i=0;i<n;i++){
     int number;
     cin>>number;
     if(abs(number) < minn){
         minn=abs(number);
     }
 }
 cout<< minn;
 
}