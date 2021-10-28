#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vint vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define all(x) x.begin(), x.end()
#define pb push_back
const int INF = INT_MAX, mod = (int)1e9+7;

int n,s,t,d[200][200];

int main() {
speed;
cin>>n>>s>>t;
for(int i = 0; i<n; ++i)
	for(int j = 0; j<n;++j)
	cin>>d[i][j];
for (int k=0; k<n; ++k)
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
cout<<d[s-1][t-1];


}