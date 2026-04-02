//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e4 + 10, INF = 2147483647;
//int dist[N];
//bool st[N];
//int n, m, s;
//typedef pair<int, int> p;
//vector<p> e[N];
//
//void dijkstra() {
//	for (int i = 0; i <= n; i++) dist[i] = INF;
//	dist[s] = 0;
//	for (int i = 1; i <= n - 1; i++) {
//		int a = 0;
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && dist[j] < dist[a]) a = j;
//
//		st[a] = true;
//
//		for (auto& t : e[a]) {
//			int y = t.first, z = t.second;
//			if (dist[a] + z < dist[y]) dist[y] = dist[a] + z;
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