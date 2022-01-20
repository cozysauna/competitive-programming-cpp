#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;
    int group_cnt;
    UnionFind(int N) : par(N) {
        for(int i = 0; i < N; i++) par[i] = -1;
        group_cnt = N;
    }

	int root(int x){
		if (par[x] < 0) return x;
		return par[x] = root(par[x]);
	}

	void unite(int x, int y){
		int rx = root(x);
		int ry = root(y);
		if (rx == ry) return;
		if (par[rx] > par[rx]) swap(rx, ry);
		par[rx] += par[ry];
		par[ry] = rx;
        group_cnt --;
	}

	int size(int x){
		return -par[root(x)];
	}
};