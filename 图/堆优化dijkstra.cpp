//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e5 + 10;
//int dist[N];
//bool st[N];
//int n, m, s;
//typedef pair<int, int> p;
//vector<p> e[N];
//priority_queue<p, vector<p>, greater<p>> h;
//
//void dijkstra() {
//	memset(dist, 0x3f, sizeof dist); dist[s] = 0;
//	h.push({ 0, s });
//	while (!h.empty()) {
//		auto tmp = h.top(); h.pop();
//		int u = tmp.second;
//
//		if (st[u]) continue;
//
//		st[u] = true;
//
//		for (auto& t : e[u]) {
//			int v = t.first, k = t.second;
//			if (dist[u] + k < dist[v]) {
//				dist[v] = dist[u] + k;
//				h.push({ dist[v], v });
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m >> s;
//	for (int i = 1; i <= m; i++) {
//		int x, y, z; cin >> x >> y >> z;
//		e[x].push_back({ y, z });
//	}
//	dijkstra();
//	for (int i = 1; i <= n; i++) cout << dist[i] << ' ';
//	return 0;
//}