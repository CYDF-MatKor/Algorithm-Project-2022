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

    ll testCase, presentNum, i, k, left, right, result;
    vector<ll> presents;

    cin >> testCase;
    while(testCase--) {
        cin >> presentNum >> k;
        result = 0;

        presents.resize(presentNum);
        for(i = 0; i < presentNum; i++) {
            cin >> presents[i];

            result += presents[i] / k;
            presents[i] %= k;
        }

        sort(presents.begin(), presents.end());

        left = 0, right = presentNum - 1;

        while(left < right) {
            if(presents[left] + presents[right] < k) left++;
            else {
                result++;

                left++;
                right--;
            }
        }

        cout << result << '\n';
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
