#include <bits/stdc++.h>

using namespace std;

int num[20];
int TC = 10;

void reverse(int a, int b)
{
	for (int i = 0; i < (b - a + 1) / 2; i++)
	{
		swap(num[a + i], num[b - i]);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < 20; i++)
	{
		num[i] = i + 1;
	}
	
	while (TC--)
	{
		int begin, end;
		cin >> begin >> end;
		reverse(begin - 1, end - 1);
	}

	for (int i = 0; i < 20; i++)
	{
		cout << num[i] << " ";
	}

	//STL reverse 함수를 이용한 풀이
	/*int arr[21] = {};
	for (int i = 1; i < 21; i++) arr[i] = i;

	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		reverse(arr + a, arr + b + 1);
	}
	for (int i = 1; i < 21; i++) cout << arr[i] << ' ';*/
}