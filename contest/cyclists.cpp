#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k,p,m;
        cin >> n >> k >> p >> m;
        k--; p--;

        deque<int> dq;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            dq.push_back(x);
        }

        int ans = 0, sum = 0;

        while(sum <= m){
            if(p <= k){
                int val = dq[p];
                sum += val;
                if(sum > m) break;
                ans++;

                dq.erase(dq.begin()+p);
                dq.push_back(val);
                p = dq.size()-1;
            }
            else{
                int mn = INT_MAX, idx = -1;
                for(int i=0;i<=k;i++){
                    if(dq[i] < mn){
                        mn = dq[i];
                        idx = i;
                    }
                }
                sum+=mn;

                dq.erase(dq.begin()+idx);
                dq.push_back(mn);

                 p--;
            }
        }

        cout << ans << endl;
    }
}