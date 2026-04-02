//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 310, M = 1e4 + 10, INF = 0x3f3f3f3f;
//struct node {
//	int x, y, z;
//}a[M];
//int fa[N], n ,m, cnt = 0;
//bool cmp(node& a, node& b) {
//	return a.z < b.z;
//}
//int find(int x) {
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//}
// 
//int k() {
//	sort(a + 1, a + 1 + m, cmp);
//	int ma = -0x3f;
//	for (int i = 1; i <= m; i++) {
//		int x = a[i].x, y = a[i].y, z = a[i].z;
//		int fx = find(x), fy = find(y);
//		if (fx != fy) {
//			cnt++;
//			ma = max(ma, z);
//			fa[fx] = fy;
//		}
//	}
//	return ma;
//}
// 
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) cin >> a[i].x >> a[i].y >> a[i].z;
//	for (int i = 1; i <= n; i++) fa[i] = i;
//	cout << cnt << ' ' << k() << endl;
//	return 0;
//}