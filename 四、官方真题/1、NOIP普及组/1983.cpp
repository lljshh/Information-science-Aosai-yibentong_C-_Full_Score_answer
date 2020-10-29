#include<bits/stdc++.h>
using namespace std;
struct yhq
{
	bool yhqb = false;
	int yhqmoney;
	int yhqtime;
}a[100100];
int main()
{
	int t1, t2;
	int n, type, money, time, moneys = 0, yhqn = 1, yhqbig = 0;
	cin >> n;
	for(int i = 1; i <=n; i++)
	{
		cin >> type >> money >> time;
		if(type == 0)
		{
			a[yhqn].yhqb = true;
			a[yhqn].yhqtime = time;
			a[yhqn].yhqmoney = money;
			money += money;
			yhqn++;
			
		}
		if(type == 1)
		{
			if(1 == 1);
			else
				moneys += money;
		}
		sort(a + 1,a + 100000);
	}
	cout << moneys;
}
