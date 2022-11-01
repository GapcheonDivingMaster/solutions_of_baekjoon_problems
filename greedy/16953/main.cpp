// Authored by : ccocco0609
// Co-authored by : -
// Link : http://boj.kr/e0b575739f204215b5ef152432e54399

#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0;
	int b = 0;
	int ans = 1;

	cin >> a >> b;

	while (true) {
		if (a > b) {
			cout << -1;
			break;
		}
		if (a == b) {
			cout << ans;
			break;
		}
		if (b % 10 == 1) {
			b = b / 10;
			ans++;
		}
		else if (b % 2 == 0) {
			b = b / 2;
			ans++;
		}
		else {
			cout << -1;
			break;
		}
	}


	return 0;
}