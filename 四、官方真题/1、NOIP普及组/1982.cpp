#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = 0, bl;
	string b;
	cin >> b;
	bl = b.length();
	for(int i = 0; i < bl; i++)
		if(b[i] == '1')
			a++;
	cout << a;
	return 0;
}
