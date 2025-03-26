#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> B[i];
        }
        
        int totalMin = 0;
        vector<int> mpp;
        for (int i = 0; i < n; ++i) {
            int diff = abs(A[i] - B[i]);
            int min_moves = min(diff, 9 - diff);
            totalMin += min_moves;
            int delta = (9 - min_moves) - min_moves; 
            mpp.push_back(delta);
        }
        
        if (k < totalMin) {
            cout << "No\n";
            continue;
        }
        
        int remaining = k - totalMin;
        if (remaining % 2 == 0) {
            cout << "Yes\n";
        } else {
            bool possible = false;
            for (int delta : mpp) {
                if (totalMin + delta <= k) {
                    possible = true;
                    break;
                }
            }
            cout << (possible ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
