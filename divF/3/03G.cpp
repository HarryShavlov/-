В одной компьютерной игре игрок выставляет в линию шарики разных цветов. 
Когда образуется непрерывная цепочка из трех и более шариков одного цвета, она удаляется из линии. 
Все шарики при этом сдвигаются друг к другу, и ситуация может повториться.

Напишите программу, которая по данной ситуации определяет, сколько шариков будет "уничтожено". 
Естественно, непрерывных цепочек из трех и более одноцветных шаров в начальный момент может быть не более одной.
 
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

struct st
{
	int n, cnt;
};

bool f(st& a)
{
	return a.cnt >= 3;
}

int main()
{
	int n;
	cin >> n;
	
	list<st> ball;
	st t;
	t.n = -1;
	t.cnt = 1;
	ball.push_back(t);	


	for (int i = 0; i < n; i++)
	{
		cin >> t.n;
		if (ball.back().n == t.n)
			ball.back().cnt++;
		else
			ball.push_back(t);
	}

	t.n = n+1;
	t.cnt = 1;
	ball.push_back(t);
	
	int cnt = 0;
	while (true)
	{
		list<st>::iterator b = find_if(ball.begin(), ball.end(), f);
		if (b == ball.end())
			break;

		cnt += b->cnt;		
		list<st>::iterator a = --b;
		b++;
		
		list<st>::iterator c = ++b;
		--b;
		
		if (a->n == c->n)
		{
			a->cnt += c->cnt;
			ball.erase(c);
		}
		ball.erase(b);
	}

	cout << cnt;

	return 0;
}
