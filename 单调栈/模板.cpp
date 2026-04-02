//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N], re[N], n;
//
//void test() {
//	stack<int> st;
//	st.push(1);
//	for (int i = 1; i <= n; i++) {
//		while (st.size() && a[st.top()] <= a[i]) st.pop();
//		if (st.size()) re[i] = st.top();
//		st.push(i);
//	}
//	for (int i = 1; i <= n; i++) cout << re[i] << ' ';
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	test();
//	return 0;
//}