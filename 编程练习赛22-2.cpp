#include<iostream>
#include<string>
#include<vector>
#include<set>
#include <cstdio>
#include<sstream>
using namespace std;
/*
hihocoder/offer22/solutions/p1
hihocoder/challenge30/p1/test
game/moba/dota2/uninstall
*/



int main()
{
	int n; 
	while (cin >> n) {
		set<string>cnt;
		for (int i = 0; i < n; ++i) {
			string t;
			cin >> t;
			stringstream ss(t);
			string x;
			
			string tmp;
			vector<string>res;
			int times = 0;
			while (getline(ss, x, '/')) {
				times++;
			}
			stringstream ss1(t);
			int count  = 0;
			while (getline(ss1, x, '/')) {
				count++;
				if (count == 1)continue;
				tmp += x;
				if (count != times){
					cnt.insert(tmp);
				}
			}	
		}
		cout << cnt.size()<< endl;
	}
	return 0;
}