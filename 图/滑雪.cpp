//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 10, M = 2e6 + 10;
//typedef long long ll;
//int h[N];
//int fa[N], n, m, pos;
//typedef pair<int, int> p;
//
//vector<p> edge[N];
//
//struct node {
//	int x, y, z;
//}a[N];
//
//bool st[N];
//ll cnt, ret;
//
//int find(int x) {
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//}
//
//bool cmp(node& a, node& b) {
//	if (h[a.y] != h[b.y]) return h[a.y] > h[b.y];
//	return a.z < b.z;
//}
//
//void dfs(int u) {
//	st[u] = true;
//	cnt++;
//	for (auto& e : edge[u]) {
//		pos++;
//		int v = e.first, k = e.second;
//		a[pos].x = u; a[pos].y = e.first; a[pos].z = e.second;
//		if (!st[v]) dfs(v);
//	}
//}
//
//void kk() {
//	sort(a + 1, a + 1 + pos, cmp);
//
//	for (int i = 1; i <= pos; i++) {
//		int x = a[i].x, y = a[i].y, z = a[i].z;
//		int fx = find(x), fy = find(y);
//		if (fx != fy) {
//			ret += z;
//			fa[fx] = fy;
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		fa[i] = i;
//		cin >> h[i];
//	}
//	for (int i = 1; i <= m; i++) {
//		int x, y, z; cin >> x >> y >> z;
//		if (h[x] >= h[y]) edge[x].push_back({y, z});
//		if (h[y] >= h[x]) edge[y].push_back({x, z});
//	}
//	dfs(1);
//	kk();
//	cout << cnt << ' ' << ret << endl;
//	return 0;
//}