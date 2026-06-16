#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b <=d && (d-b+a) >= c){
            cout<<2*d-2*b+a-c<<endl;
        }
        else{
            cout<<-1<<endl;
            
        }
    }

}
