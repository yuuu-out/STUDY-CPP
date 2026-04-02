//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 510;
//vector<int> e[N];
//int in[N], n, m, re = 0;
//bool st[N];
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int x; cin >> x >> m;
//		st[x] = true;
//		while(m--) {
//			int t; cin >> t;
//			e[x].push_back(t);
//			in[t]++;
//		}
//	}
//
//	queue<int> q;
//	for (int i = 1; i <= 500; i++) {
//		if (!in[i] && st[i]) q.push(i);
//	}
//
//	while (!q.empty()) {
//		int t = q.front(); q.pop();
//		for (auto& a : e[t]){
//			in[a]--;
//			if (st[a] && in[a] == 0) q.push(a);
//		}
//	}
//
//	for (int i = 1; i <= 500; i++) {
//		if (in[i] && st[i]) re++;
//	}
//
//	if (re) cout << re << endl;
//	else cout << "YES" << endl;
//	return 0;
//}