#include <string>
#include <vector>
#include <iostream>
using namespace std;

// �־��� ������ �� ������ �ֻ����� �� ���� ���̷� ������ �� ������ ��ġ�Ҽ��ִ� �ֻ��� ������ ��� ���ϸ� �ڽ��� ���� �ֻ��� ������ ���Ҽ��ִ�.
int solution(vector<int> box, int n)
{
	int answer = (box[0] / n) * (box[1] / n) * (box[2] / n);

	return answer;
}

int main()
{
	vector<int> box = { 10,8,6 };
	int n = 3;
	int result = solution(box, n);
	cout << result;
}