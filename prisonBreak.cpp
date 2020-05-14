long int prison(int n, int m, vector<int> hor, vector<int> ver) {
	vector<bool> xs(n + 1), ys(m + 1);
	for (int h : hor) xs[h] = true;
	for (int v : ver) ys[v] = true;
	int xm = 0, ym = 0;
	for (int i = 1, j = 0; i <= n; i++) {
		if (not xs[i]) j = 0;
		else xm = max(xm, ++j);
	}
	for (int i = 1, j = 0; i <= m; i++) {
		if (not ys[i]) j = 0;
		else ym = max(ym, ++j);
	}
	return (long int)(xm + 1) * (ym + 1);
}
