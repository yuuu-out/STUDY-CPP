//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 110;
//int in[N];
//vector<int> e[N];
//int n;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int j;
//		while (cin >> j, j) {
//			e[i].push_back(j);
//			in[j]++;
//		}
//	}
//
//	queue<int> q;
//	for (int i = 1; i <= n; i++) {
//		if (!in[i]) q.push(i);
//	}
//
//	while (!q.empty()) {
//		int t = q.front(); q.pop();
//		cout << t << ' ';
//		for (auto& a : e[t]) {
//			in[a]--;
//			if (in[a] == 0) q.push(a);
//		}
//	}
//	return 0;
//}