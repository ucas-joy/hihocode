#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
/*
bool isvalid(string s, int k)
{
	
	char tmp= s[0];
	if (tmp - '0' > k) return false;
	for (int i = 1; i < s.length(); ++i)
	{
	//	if (s[i] - '0' > k) return false;
		if ((tmp - '0') *(s[i] - '0') > k) return false;
		tmp = s[i];
	}
	return true;
}
int main()
{
	int n, k;
	while (cin >> n >> k) {
		vector<long long >res;
		if (n == 1) {
			cout << k << endl;
		}
		else {
			long long  small = pow(10, n - 1);
			long long  big = k * x[n - 1];
			bool flag = false;
			for (long long i = small; i <= big; ++i) {
				flag = false;
				string t = to_string(i);
				for (int w = 0; w < t.length(); ++w) {
					if ((t[w] - '0') > k) {
						flag = true;
						break;
					}
				}
				if (flag) {
					continue;
				}
				if (isvalid(t, k)) {
					res.push_back(i);
				}
			}
			for (int i = 0; i < res.size(); ++i) {
				cout << res[i] << endl;
			}		
		}
	}
	return 0;
}*/
/*
vector<string>res;
bool isvalid(string s, int k)
{

	char tmp = s[0];
	if (tmp - '0' > k) return false;
	for (int i = 1; i < s.length(); ++i)
	{
		//	if (s[i] - '0' > k) return false;
		if ((tmp - '0') *(s[i] - '0') > k) return false;
		tmp = s[i];
	}
	return true;
}
void bfs(vector<string>res,string start,int n, int k){
	if (isvalid(start,k)){
		res.push_back(start);
		return;
	}
	for (int j = 0; j <= n; ++j) {
		for (int i = 0; i <= k; ++i) {
			if (j == 0 && i == 0)
				continue;
			string x;
			x+= start[j];
			start[j] = i;
			bfs(res, start, n, k);
			start[j] = x[0];
		}
	}
}
int main()
{
	int n, k;
	while (cin >> n >> k) {
		
	}
	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
#define M 1000000000+7;
long long count1 = 0;
void dfs(int n, int x, int pre, int k)
{
	if (n == 0) {
		count1 = (count1 + 1) % M;
		return;
	}
	for (int i = 0; i <= k; ++i)
	{
		if (i *pre <= k) {
			dfs(n - 1, x * 10 + i, i, k);
		}
	}
}
int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		for (int i = 1; i <= k; ++i)
		{
			dfs(n - 1, i, i,k);
		}
		cout << count1/8 << endl;
	}
	return 0;
	
}