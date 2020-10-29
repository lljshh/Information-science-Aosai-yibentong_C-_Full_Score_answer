#include<bits/stdc++.h>
using namespace std;
void h(int a, int b, bool f, string c, string d, string e)
{
	if(b - a == 0 && f)
		cout << c << "->" << a << "->" << d;
	if(b - a == 0 && !f)
		cout << c << "->" << a << "->" << e;
	else
	{
		h(a + 1, b, false, c, d, e);
		cout << c << "->" << a << "->" << e;
		h(a + 1, b, false, c, d, e);
	}
}
int main()
{
	int a;
	string c, d, e;
	cin >> a >> c >> d >> e;
	h(a, 1, true, c, d, e);
	return 0;
}
