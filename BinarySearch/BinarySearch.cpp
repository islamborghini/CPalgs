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
const int N = 2000010;

int n,k,a[N], ans;

int binSearch(int l, int r){
	while(l<=r){
		int mid = l+(r-l)/2;
		if (a[mid] == k) {
			return mid+1; 
			break;
		} else if (a[mid] < k)
			l = mid+1;
			else r = mid-1;
		}
	return -1;			   
}

int main() {
	speed;
	cin>>n>>k;
	for(int i = 0; i<n; ++i)
		cin>>a[i];
	int l = 0, r = n-1;
	ans = binSearch(l,r);
	if(ans == -1) 
		cout<<"NO"<<endl;
	else 
		cout<<ans;
}
