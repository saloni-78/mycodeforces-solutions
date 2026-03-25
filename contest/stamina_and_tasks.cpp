include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> c(n);
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
            cin>>p[i];
        }
        double dp=0.0;
        for(int i=n-1;i>=0;i--){
            double f=(1.0-(p[i]/100.0));
            dp=max(dp,c[i]+(dp*f));
        }
        cout<<fixed<<setprecision(10)<<dp<<endl;
        
    }
    

}
