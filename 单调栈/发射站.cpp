//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e6 + 10;
//long long re = 0, v[N], sum[N];
//int h[N];
//int n;
//int main() {
//	cin >> n;
//	v[0] = v[n + 1] = 0;
//	for (int i = 1; i <= n; i++) cin >> h[i] >> v[i];
//	stack<int> st;
//	
//	for (int i = 1; i <= n; i++) {
//		while (st.size() && h[st.top()] <= h[i]) st.pop();
//		//sum[i] += v[st.size() ? st.top() : 0];
//		if (st.size()) sum[st.top()] += v[i];
//		st.push(i);
//	}
//	
//	while (st.size()) st.pop();
//	
//	for (int i = n; i >= 1; i--) {
//		while (st.size() && h[st.top()] <= h[i]) st.pop();
//		//sum[i] += v[st.size() ? st.top() : n + 1];
//		if (st.size()) sum[st.top()] += v[i];
//		st.push(i);
//	}
//
//	for (int i = 1; i <= n; i++) re = max(re, sum[i]);
//
//	cout << re << endl;
//	return 0;
//}