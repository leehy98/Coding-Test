#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//� ������ 1�ð��� �ι踸ŭ �����Ѵٰ� �մϴ�. ó�� ������ ������ n�� ����� �ð� t�� �Ű������� �־��� �� t�ð� �� ������ ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.
// pow () : base�� �Ǵ� ������ n ������ ���ϴ� �Լ�
// ex) pow(2,10) 
// n(������ ��) * pow(2(�ð����� 2�辿 �����Ѵ� ������), t (�ð�)); 
int solution(int n, int t)
{
	return n * pow(2, t);
}

int main()
{
	int n = 2;
	int t = 10;
	int result = solution(n, t);
	cout << result;
	return 0;
}
