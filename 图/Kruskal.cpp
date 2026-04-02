//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 5010, M = 2e5 + 10, INF = 0x3f3f3f3f;
//
//struct node {
//	int x, y, z;
//}a[M];
//
//int fa[N], n, m;
//
//int find(int x) {
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//}
//
//bool cmp(node& a, node& b) {
//	return a.z < b.z;
//}
//
//int Kruskal() {
//	sort(a + 1, a + 1 + m, cmp);
//	int re = 0;
//	int cnt = 0;
//	for (int i = 1; i <= m; i++) {
//		int x = a[i].x, y = a[i].y, z = a[i].z;
//		int fx = find(x), fy = find(y);
//		if (fx != fy) {
//			cnt++;
//			re += z;
//			fa[fx] = fy;
//		}
//	}
//	return cnt == n - 1 ? re : INF;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) cin >> a[i].x >> a[i].y >> a[i].z;
//	for (int i = 1; i <= n; i++) fa[i] = i;
//	int re = Kruskal();
//	if (re == INF) cout << "orz" << endl;
//	else cout << re << endl;
//	return 0;
//}