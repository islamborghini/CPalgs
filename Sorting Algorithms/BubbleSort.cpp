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
int main() {
speed;
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; ++i)
		cin>>arr[i];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n-1; j++){
			if (arr[j] > arr[j+1])
				swap(arr[j],arr[j+1]);	
		}		
	for(int i = 0; i<n; ++i) {
		cout<<arr[i]<<" ";
		}
				
	
}