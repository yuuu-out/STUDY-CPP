#define _CRT_SECURE_NO_WARNINGS
///Âå¹È P2786
//#include<cstdio>
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//int n, p;
//bool cheak(char& c) {
//	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//	cin >> n >> p;
//	map<string, int> mp;
//	for (int i = 0; i < n; i++) {
//		string s; int x;
//		cin >> s >> x;
//		mp[s] = x;
//	}
//	char c; string tmp = ""; long long re = 0;
//	while (scanf("%c", &c) != EOF) {
//		if (cheak(c)) {
//			tmp += c;
//		} 
//		else {
//			re = (re + mp[tmp]) % p;
//			tmp = "";
//		}
//	}
//	cout << re << endl;
//	return 0;
//}

///Á´Ê½¹þÏ£±í
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 23;
//int h[N], e[N], ne[N], id;
//
//
//int f(int x) {
//	return (x % N + N) % N;
//}
//
//void insert(int x) {
//	int idx = f(x);
//	id++;
//	e[id] = x;
//	ne[id] = h[idx];
//	h[idx] = id;
//}
//
//
//int main() {
//	
//	return 0;
//}


///Âå¹È P5266
//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//unordered_map<string, int> mp;
//int n;
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string tmp; int mov, score;
//		cin >> mov;
//		if (mov == 1) {
//			cin >> tmp >> score;
//			mp[tmp] = score;
//			cout << "OK" << endl;
//		}
//		else if (mov == 2) {
//			cin >> tmp;
//			if (mp.count(tmp)) cout << mp[tmp] << endl;
//			else cout << "Not found" << endl;
//		}
//		else if (mov == 3) {
//			cin >> tmp;
//			if (mp.count(tmp)) {
//				mp.erase(tmp);
//				cout << "Deleted successfully" << endl;
//			}
//			else cout << "Not found" << endl;
//		}
//		else {
//			cout << mp.size() << endl;
//		}
//	}
//	return 0;
//}


///Âå¹È P3405
//#include<iostream>
//#include<unordered_map>
//#include<string>
//using namespace std;
//unordered_map<string, int> mp;
//int n;
//int main() {
//	cin >> n;
//	long long re = 0;
//	while (n--) {
//		string x, y;
//		cin >> x >> y;
//		x = x.substr(0, 2);
//		if (x == y) continue;
//		re += mp[x + y];
//		mp[y + x]++;
//	}
//	cout << re << endl;
//	return 0;
//}


///Âå¹È P3679
//#include<iostream>
//#include<unordered_map>
//#include<set>
//#include<cstring>
//using namespace std;
//unordered_map<string, set<int>> mp;
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int l; cin >> l;
//		while (l--) {
//			string tmp; cin >> tmp;
//			mp[tmp].insert(i);
//		}
//	}
//	int m; cin >> m;
//	while (m--) {
//		string tmp; cin >> tmp;
//		for (auto& e : mp[tmp]) {
//			cout << e << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}



///Âå¹È P1102
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//unordered_map<int, int> mp;
//int const N = 1e5 + 10;
//int main() {
//	int n, c, a[N];
//	cin >> n >> c;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		mp[a[i]]++;
//	}
//	long long re = 0;
//	for (int i = 0; i < n; i++) {
//		re += mp[a[i] + c];
//	}
//	cout << re << endl;
//	return 0;
//}


///Âå¹È P10250
//#include<iostream>
//using namespace std;
//const int N = 65;
//long long dp[N];
//int main() {
//	int n;
//	cin >> n;
//	dp[1] = 1; dp[2] = 2; dp[3] = 4;
//	for (int i = 4; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//	}
//	cout << dp[n] << endl;
//	return 0;
//}



///Âå¹È P1216
//#include<iostream>
//using namespace std;
//const int N = 1000 + 10;
//int a[N][N], dp[N][N];
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
//		}
//	}
//	int re  = 0;
//	for (int i = 1; i <= n; i++) re = max(dp[n][i], re);
//	cout << re << endl;
//	return 0;
//}
///¿Õ¼äÓÅ»¯°æ
//#include<iostream>
//using namespace std;
//const int N = 1000 + 10;
//int a[N][N], dp[N];
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = i; j >= 1; j--) {
//			dp[j] = max(dp[j], dp[j - 1]) + a[i][j];
//		}
//	}
//	int re = 0;
//	for (int i = 1; i <= n; i++) re = max(dp[i], re);
//	cout << re << endl;
//	return 0;
//}



///Âå¹È P1192
//#include<iostream>
//using namespace std;
//typedef long long ll;
//const int N = 1e5 + 10, mod = 1e5 + 3;
//ll dp[N];
//int main() {
//	int n, k;
//	cin >> n >> k;
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k && i - j >= 0; j++) {
//			dp[i] = (dp[i] + dp[i - j]) % mod;
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}


///Âå¹È P1115
//#include<iostream>
//using namespace std;
//const int N = 2e5 + 10;
//int a[N], dp[N];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	dp[1] = a[1];
//	for (int i = 2; i <= n; i++) {
//		dp[i] = max(a[i], dp[i - 1] + a[i]);
//	}
//	int re = -1e9;
//	for (int i = 1; i <= n; i++) re = max(re, dp[i]);
//	cout << re << endl;
//	return 0;
//}



///Âå¹È P1216
//#include<iostream>
//using namespace std;
//int n, m;
//const int N = 35;
//int dp[N][N];
//int main() {
//	cin >> n >> m;
//	dp[1][2] = dp[1][n] = 1;
//	for (int i = 2; i <= m; i++) {
//		
//		dp[i][1] += dp[i - 1][n] + dp[i - 1][2];
//
//		for (int j = 2; j < n; j++) {
//			dp[i][j] += dp[i - 1][j - 1] + dp[i - 1][j + 1];
//		}
//		
//		dp[i][n] += dp[i - 1][1] + dp[i - 1][n - 1];
//	}
//	cout << dp[m][1] << endl;
//	return 0;
//}



///Âå¹È P1541
//#include<iostream>
//using namespace std;
//const int M = 40 + 10;
//const int N = 350 + 10;
//int n, m;
//int s[N], cont[5], dp[M][M][M][M];
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> s[i];
//	for (int i = 1; i <= m; i++) {
//		int tmp; cin >> tmp;
//		cont[tmp]++;
//	}
//	dp[0][0][0][0] = s[1];
//	for(int a = 0; a <= cont[1]; a++)
//		for(int b = 0; b <= cont[2]; b++)
//			for(int c = 0; c <= cont[3]; c++)
//				for (int d = 0; d <= cont[4]; d++) {
//					int i = 1 + a + 2 * b + 3 * c + 4 * d;
//					int& t = dp[a][b][c][d];
//					if (a) t = max(t, dp[a - 1][b][c][d] + s[i]);
//					if (b) t = max(t, dp[a][b - 1][c][d] + s[i]);
//					if (c) t = max(t, dp[a][b][c - 1][d] + s[i]);
//					if (d) t = max(t, dp[a][b][c][d - 1] + s[i]);
//				}
//	cout << dp[cont[1]][cont[2]][cont[3]][cont[4]] << endl;
//	return 0;
//}


///Âå¹È P1002
//#include<iostream>
//using namespace std;
//int x[9] = { 0, -2, -1, 1, 2, 2, 1, -1, -2 },
//y[9] = { 0, 1, 2, 2, 1, -1, -2, -2, -1 };
//int n, m, a, b;
//const int N = 30;
//long long dp[N][N];
//bool check(int i, int j) {
//	for (int t = 0; t < 9; t++) {
//		if (i == a + x[t] && j == b + y[t]) return 1;
//	}
//	return 0;
//}
//int main() {
//	cin >> n >> m >> a >> b;
//	n++; m++; a++; b++;
//	dp[1][0] = 1;
//	for(int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (check(i, j)) dp[i][j] = 0;
//			else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		}
//	cout << dp[n][m] << endl;
//	return 0;
//}



///Âå¹È P1004
//#include<iostream>
//using namespace std;
//int n;
//const int N = 15;
//int a[N][N];
//int dp[2 * N][N][N];
//int main() {
//	int n,x,y,z;
//	cin >> n >> x >> y >> z; 
//	while (x != 0 && y != 0 && z != 0) {
//		a[x][y] = z;
//		cin >> x >> y >> z;
//	}
//	for (int s = 2; s <= 2 * n; s++)
//		for (int i1 = 1; i1 <= n; i1++) {
//			int j1 = s - i1;
//			if (j1 <= 0 || j1 > n) continue;
//			for (int i2 = 1; i2 <= n; i2++) {
//				int j2 = s - i2;
//				if (j2 <= 0 || j2 > n) continue;
//				int t = dp[s - 1][i1][i2];
//				t = max(t, dp[s - 1][i1 - 1][i2]);
//				t = max(t, dp[s - 1][i1 - 1][i2 - 1]);
//				t = max(t, dp[s - 1][i1][i2 - 1]);
//				if(i1 == i2) dp[s][i1][i2] = t + a[i1][j1];
//				else dp[s][i1][i2] = t + a[i1][j1] + a[i2][j2];
//			}
//		}
//	cout << dp[2 * n][n][n] << endl;
//	return 0;
//}


///Âå¹È B3637
//#include<iostream>
//using namespace std;
//const int N = 5000 + 10;
//int dp[N], a[N], n, re = 0;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (a[j] < a[i]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//		re = max(re, dp[i]);
//	}
//	cout << re << endl;
//	return 0;
//}


///Âå¹È P1091
//#include<iostream>
//using namespace std;
//const int N = 110;
//int n, dp1[N], dp2[N], a[N], re = 0;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++) {
//		dp1[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (a[j] < a[i]) {
//				dp1[i] = max(dp1[i], dp1[j] + 1);
//			}
//		}
//	}
//	for (int i = n; i >= 1; i--) {
//		dp2[i] = 1;
//		for (int j = n; j > i; j--) {
//			if (a[j] < a[i]) {
//				dp2[i] = max(dp2[i], dp2[j] + 1);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		re = max(re, dp1[i] + dp2[i] - 1);
//	}
//
//	cout << n - re << endl;
//	return 0;
//}



///Å£¿Í Å£¿ÉÀÖºÍ×î³¤¹«¹²×ÓÐòÁÐ
//#include<iostream>
//using namespace std;
//string x, y;
//const int N = 5010;
//int dp[N][N];
//
//int main() {
//    while (cin >> x >> y) {
//        int n = x.size(), m = y.size();
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (x[i - 1] == y[j - 1]) {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                else {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        cout << dp[n][m] << endl;
//    }
//    return 0;
//}


///Âå¹È P2758
//#include<iostream>
//using namespace std;
//const int N = 2000 + 10;
//string x, y;
//int dp[N][N];
//int main() {
//	cin >> x >> y;
//	int n = x.size(), m = y.size();
//	for (int i = 1; i <= n; i++) dp[i][0] = i;
//	for (int i = 1; i <= m; i++) dp[0][i] = i;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (x[i - 1] == y[j - 1]) {
//				dp[i][j] = dp[i - 1][j - 1];
//			}
//			else {
//				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
//			}
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}


///Å£¿Í NC226514
//#include<iostream>
//#include <cstring>
//using namespace std;
//const int N = 1010;
//int dp[N][N], v[N], w[N];
//int main() {
//	int n, V;
//	cin >> n >> V;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= V; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//		}
//	}
//	cout << dp[n][V] << endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0][0] = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= V; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//		}
//	}
//	if (dp[n][V] < 0) cout << 0 << endl;
//	else cout << dp[n][V] << endl;
//	return 0;
//}

//#include<iostream>
//#include <cstring>
//using namespace std;
//const int N = 1010;
//int dp[N], v[N], w[N];
//int main() {
//	int n, V;
//	cin >> n >> V;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	for (int j = 1; j <= n; j++) {
//		for (int i = V; i >= 0; i--) {
//			if (i >= v[j]) {
//				dp[i] = max(dp[i], dp[i - v[j]] + w[j]);
//			}
//		}
//	}
//		
//	cout << dp[V] << endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int j = 1; j <= n; j++) {
//		for (int i = V; i >= 0; i--) {
//			if (i >= v[j]) {
//				dp[i] = max(dp[i], dp[i - v[j]] + w[j]);
//			}
//		}
//	}
//	if (dp[V] < 0) cout << 0 << endl;
//	else cout << dp[V] << endl;
//	return 0;
//}



///Âå¹È P1048
//#include<iostream>
//using namespace std;
//const int N = 1010;
//int dp[N], t[N], w[N];
//int main() {
//	int n, m;
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++) cin >> t[i] >> w[i];
//	for (int i = 1; i <= n; i++) {
//		for (int j = m; j >= t[i]; j--) {
//			dp[j] = max(dp[j], dp[j - t[i]] + w[i]);
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}



///Âå¹È P1164
//#include<iostream>
//using namespace std;
//const int N = 1010;
//int dp[N], w[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> w[i];
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = m; j >= w[j]; j--) {
//			dp[j] += dp[j - w[i]];
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}



///Âå¹È P2946
//#include<iostream>
//using namespace std;
//const int N = 2010, M = 1010, MOD = 1e8;
//int dp[N][M], a[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	dp[0][0] = 1;
//	for(int i = 1; i <= n; i++) 
//		for (int j = 0; j < m; j++) {
//			dp[i][j] = (dp[i - 1][j] + dp[i - 1][(j - a[i] + m) % m]) % MOD;
//		}
//	cout << dp[n][0] - 1 << endl;
//	return 0;
//}


///Å£¿Í NC226516
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1010;
//int dp[N][N], v[N], w[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	for(int i = 1; i <= n; i++) 
//		for (int j = 0; j <= m; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//			}
//		}
//	cout << dp[n][m] << endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0][0] = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j <= m; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//			}
//		}
//	if(dp[n][m] < 0) cout << 0 << endl;
//	else cout << dp[n][m] << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1010;
//int dp[N], v[N], w[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	for (int i = 1; i <= n; i++)
//		for (int j = v[i]; j <= m; j++) {
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	cout << dp[m] << endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = v[i]; j <= m; j++) {
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	if (dp[n] < 0) cout << 0 << endl;
//	else cout << dp[m] << endl;
//	return 0;
//}


///Âå¹È P2946
//#include<iostream>
//using namespace std;
//const int N = 1e4 + 10, M = 1e7 + 10;
//long long dp[M];
//int t[N], w[N], n, m;
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++) cin >> t[i] >> w[i];
//	for (int i = 1; i <= n; i++)
//		for (int j = t[i]; j <= m; j++) {
//			dp[j] = max(dp[j], dp[j - t[i]] + w[i]);
//		}
//	cout << dp[m] << endl;
//	return 0;
//}


///Âå¹È P2918
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 110, M = 5e4 + 10;
//int dp[M], g[N], c[N], n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> g[i] >> c[i];
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0] = 0;
//	for(int i = 1; i <= n; i++)
//		for (int j = g[i]; j <= m; j++) {
//			dp[j] = min(dp[j], dp[j - g[i]] + c[i]);
//		}
//	if (dp[m] < 0) cout << 0 << endl;
//	else cout << dp[m] << endl;
//	return 0;
//}


