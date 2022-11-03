#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define lll __int128_t
#define ld long double
#define INF (int)1e9
#define INFLL (long long)1e18
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define all(x) (x).begin(), (x).end()
#define MOD (INF + 7)

using namespace std;

void init();

int main() {
    init();

    int testCase, arrNum, i;
    vector<int> arrA, arrB,arrC;
    bool isPossible;

    cin >> testCase;
    while(testCase--) {
        cin >> arrNum;
        isPossible = true;

        arrA.resize(arrNum);
        arrB.resize(arrNum);
        arrC.resize(arrNum);

        for(i = 0; i < arrNum; i++) cin >> arrA[i];
        for(i = 0; i < arrNum; i++) cin >> arrB[i];
        for(i = 0; i < arrNum; i++) arrC[i]=arrA[i]-arrB[i];
        ll m=*max_element(arrC.begin(),arrC.end());
        for(i = 0; i < arrNum; i++) {
            if(arrA[i]<arrB[i])isPossible=0;
            if(arrA[i] - arrB[i]==m || arrB[i]==0) continue;

            isPossible = false;
            break;
        }

        cout << (isPossible ? "YES\n" : "NO\n");
    }

    return 0;
}

void init(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt+", stdin);
    freopen("output.txt", "wt+", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
