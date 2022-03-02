#include <iostream>
#include <vector>
using namespace std;
/*
int list[101][101];
int pos[101][101];
bool check[101][101];
vector<vector<int>> v(101);
void DFS(int cur,vector <int> vv) {
	for (int i = 0; i < vv.size(); i++) {
		pos[vv[i]][cur] = 1;
		check[vv[i]][cur] = true;
	}
	vv.push_back(cur);
	for (int i = 0; i < v[cur].size(); i++) {
		if(!check[cur][v[cur][i]])
			DFS(v[cur][i], vv);
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i =1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> list[i][j];
			if (list[i][j] == 1) {
				v[i].push_back(j);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		vector<int> vv;
		DFS(i,vv);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				check[i][j] = false;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << pos[i][j] << " ";
		}
		cout << "\n";
	}
}
*/