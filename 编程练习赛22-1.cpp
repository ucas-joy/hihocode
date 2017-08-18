#include<iostream>
#include<vector>
#include<cstring>
int dp[100001];
int dp1[100001];
using namespace std;

int main11()
{
	int n;
	while (cin >> n)
	{
		memset(dp, 0, sizeof(dp));
		memset(dp1, 0, sizeof(dp1));
		int count1 = 0;
		int count2 = 0;
		int sum1 = 0;
		long long  sum = 0;
		for (int i = 0; i < n; ++i) {
			int t;
			cin >> t;
			if (t == 1) {
				count1++;
			}
			else if (i != 0 && t == 2) {
				sum1 += count1;
			}
			else if (t == 3) {
				sum += sum1;
			}
		}
		cout << sum << endl;
	}
	return 0;
}