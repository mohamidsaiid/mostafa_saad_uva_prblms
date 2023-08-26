#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast cin.tie(0), ios::sync_with_stdio(false);
int main()
{
	fast;

	ll q, x;
	cin >> q;
	while (q != 0)
	{
		x = sqrt(q);
		if (x*x == q)
			cout << "yes\n";
		else
			cout << "no\n";
		cin >> q;
	}
	return 0;
}
