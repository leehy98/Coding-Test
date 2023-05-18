#include <iostream>

using namespace std;
//"*"의 높이와 너비를 1이라고 했을 때, "*"을 이용해 직각 이등변 삼각형을 그리려고합니다.
//정수 n 이 주어지면 높이와 너비가 n 인 직각 이등변 삼각형을 출력하도록 코드를 작성해보세요.
// 간단한 별찍기 문제이다. 첫번째  for는 줄 2번째 for문은 각 줄의 별 갯수를 출력한다.
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}