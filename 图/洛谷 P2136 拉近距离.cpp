#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
const int N = 1e3 + 10, M = 1e4 + 10;
typedef  pair<int, int> p;
vector<p> e[N];
int n, m, dist[N];

bool bf() {
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	int flag;
	for (int i = 1; i <= n + 1; i++) {
		flag = 0;
		for (int x = 1; x <= n; x++) {

			if (dist[x] == 0x3f3f3f3f) continue;

			for (auto& t : e[x]) {
				int y = t.first, w = t.second;
				if (dist[y] > dist[x] + w) {
					dist[y] = dist[x] + w;
					flag = 1;
				}
			}
		}
		if (!flag) return flag;
	}
	return flag;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y, z; cin >> x >> y >> z;
		e[x].push_back({ y, -z });
	}
	if (bf()) cout << "Forever love" << endl;
	else cout << dist[n] << endl;
	return 0;
}