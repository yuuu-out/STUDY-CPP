//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 2e3 + 10, M = 3e3 + 10;
//typedef pair<int, int> p;
//struct node{
//	int x, y, w;
//}e[M * 2];
//
//int t, n, m, dist[N], pos;
//
//bool BF() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	bool flag;
//	for (int i = 1; i <= n + 1; i++) {
//		flag = 0;
//		for (int j = 1; j <= pos; j++) {
//			int x, y, w;
//			x = e[j].x; y = e[j].y; w = e[j].w;
//			if (dist[x] == 0x3f3f3f3f) continue;
//			
//			if (dist[y] > dist[x] + w) {
//				dist[y] = dist[x] + w;
//				flag = 1;
//			}
//		}
//		
//		if (!flag) return flag;
//	}
//	return flag;
//}
//
//int main() {
//	cin >> t;
//	while (t--) {
//		cin >> n >> m; pos = 0;
//		for (int i = 1; i <= m; i++) {
//			int x, y, z; cin >> x >> y >> z;
//			pos++;
//			e[pos].x = x; e[pos].y = y; e[pos].w = z;
//			if(z >= 0) {
//				pos++;
//				e[pos].x = y; e[pos].y = x; e[pos].w = z;
//			}
//		}
//		if (BF()) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}