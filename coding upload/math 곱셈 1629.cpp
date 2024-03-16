#include <iostream>

using namespace std;

long long pow_mod(long long a, long long b, long long c)
{
	if (b == 0)return 1; // ������ 0������ 1�̴�
	long long half = pow_mod(a, b / 2, c); // ������ ������ ������ �ŵ����� ���
	long long result = (half * half) % c; // b�� ¦���� ���a^b = a^b/2 * a^b/2
	if (b % 2 == 1) result = (a * result) % c; // b�� Ȧ���� a�� �ѹ� �� �����ش�
	return result;
}

int main()
{
	ios_base::sync_with_stdio(NULL); cin.tie(NULL);

	long long a, b, c;
	cin >> a >> b >> c;
	cout << pow_mod(a, b, c);
	return 0;
}