//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e5 + 10;
//long long a[N], ri[N], le[N];
//
//
//int main() {
//	int n;
//	while (cin >> n, n) {
//		long long re = 0;
//		for (int i = 1; i <= n; i++) cin >> a[i];
//		stack<int> st;
//		for (int i = 1; i <= n; i++) {
//			while (st.size() && a[st.top()] >= a[i]) st.pop();
//			le[i] = st.size() ? st.top() : 0;
//			st.push(i);
//		}
//		while (st.size()) st.pop();
//		for (int i = n; i >= 1; i--) {
//			while (st.size() && a[st.top()] >= a[i]) st.pop();
//			ri[i] = st.size() ? st.top() : n + 1;
//			st.push(i);
//		}
//
//		for (int i = 1; i <= n; i++) {
//			re = max(re, (ri[i] - le[i] - 1) * a[i]);
//		}
//		cout << re << endl;
//	}
//	
//	return 0;
//}