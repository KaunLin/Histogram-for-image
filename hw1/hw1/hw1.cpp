#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x = 0, y = 0;
	int avg = 0, h = 0;
	int secret = 0;
	srand(2020);
	x = 209;
	y = 198;
	h = x - y;
	avg = (x + y) / 2;
	secret = rand() % (1 - 0 + 1) + 0;
	int newh = 2 * h + secret;
	int min = 2 * (255 - avg);
	int b = 2 * avg + 1;
	int sition = 0;
	if (min > b)
	{
		min = b;
	}
	if (newh <= min)
	{
		sition = 1;
	}
	else
	{
		newh = 2 * (h / 2) + secret;
		if (newh <= min)
		{
			sition = 2;
		}
		else
		{
			newh = 0;
			sition = 3;
		}
	}
	int add = 0, less = 0;
	int map = 0;
	int bite = 0;
	if (sition == 1)
	{
		if (newh % 2 == 0)
		{
			add = newh / 2;
			less = add;
		}
		else
		{
			add = newh / 2 + 1;
			less = newh / 2;
		}
		x = avg + add;
		y = avg - less;
	}
	if (sition == 2)
	{
		if (newh % 2 == 0)
		{
			add = newh / 2;
			less = add;
		}
		else
		{
			add = newh / 2 + 1;
			less = newh / 2;
		}
		x = avg + add;
		y = avg - less;
	}
	cout << x << endl;
	cout << y << endl;
}

