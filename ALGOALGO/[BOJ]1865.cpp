#include <iostream>
#include <queue>
#include <vector>
/*
using namespace std;
#define INF 999999999999
int n, m, w, t;
int a, b, c;
vector<pair<int, int>> v[500];
long long dist[500];
bool cycle;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		v[a - 1].push_back({ b - 1,c });
	}
	fill(dist, dist + n, INF);
	dist[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dist[j] == INF) continue;

			for (int k = 0; k < v[j].size(); k++) {
				pair <int, int> tmp = v[j][k];
				if (dist[tmp.first] > dist[j] + tmp.second) {
					dist[tmp.first] = dist[j] + tmp.second;
					if (i == n - 1) cycle = true;
				}
			}
		}
	}
	if (cycle) {
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
	}
}
*/
/*
int n, m, w, t;
int link[501][501];
int hole[501][501];
int cost[501][501];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m >> w;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				link[i][j] = 10001;
				hole[i][j] = 0;
			}
			link[i][i] = 0;
		}
		for (int i = 0; i < m; i++) {
			int s, e,c;
			cin >> s >> e >> c;
			if (link[s][e] != 10001) {
				if (c <= link[s][e]) {
					link[s][e] = c;
					link[e][s] = c;
				}
				else {
					continue;
				}
			}
			link[s][e] = c;
			link[e][s] = c;
		}
		for (int i = 0; i < w; i++) {
			int s, e, c;
			cin >> s >> e >> c;
			link[s][e] = -c;
		}
		for (int k = 1; k <= n; k++) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					link[i][j] = min(link[i][j], link[i][k] + link[k][j]);
				}
			}
		}
		bool ans = false;
		for (int i = 1; i <= n; i++) {
			if (link[i][i] < 0) {
				ans = true;
				break;
			}
		}
		if (ans) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
*/