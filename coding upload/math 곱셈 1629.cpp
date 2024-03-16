#include <iostream>

using namespace std;

long long pow_mod(long long a, long long b, long long c)
{
	if (b == 0)return 1; // 모든수의 0제곱은 1이다
	long long half = pow_mod(a, b / 2, c); // 지수를 반으로 나누어 거듭제곱 계산
	long long result = (half * half) % c; // b가 짝수일 경우a^b = a^b/2 * a^b/2
	if (b % 2 == 1) result = (a * result) % c; // b가 홀수면 a를 한번 더 곱해준다
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