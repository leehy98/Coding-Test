#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// ���� �迭 numbers�� �Ű������� �־����ϴ�. numbers�� ���� �� �� ���� ���� ���� �� �ִ� �ִ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.
// numbers	result
// [1, 2, -3, 4, -5] 15
// [0, -31, 24, 10, 1, 9]	240
// [10, 20, 30, 5, 5, 20, 5]	600
// �迭�� ������ �����Ҽ��� ������ sort�� ����� ������������ ������ 0,1��° �ε����� �迭�� �������� ������ ���� �ε����� ���� max�� ���� �� ū ���� ����
int solution(vector<int> numbers)
{
	
	sort(numbers.begin(), numbers.end());
	int a = numbers[0] * numbers[1];
	int b = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
	int answer = max(a,b);
	return answer;

}
int main()
{
	vector<int> numbers = { 1, 2, -3, 4, -5 };
	int result = solution(numbers);
	cout << result;
}