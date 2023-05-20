#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//rotate : template <class ForwardIterator>  ForwardIterator rotate (ForwardIterator first, ForwardIterator middle, ForwardIterator last);
//	first : ȸ�� ���� ���� , middle : ȸ���Ͽ� ù ��Ұ� �� ���� �� interator , last : ȸ���� ������ ������ interator , last�� ����Ű�� ���Ҵ�  ������ ���� x 
vector<int> solution(vector<int> numbers, string direction)
{
	if (direction == "left")
	{
		rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
	}
	else if (direction == "right")
	{
		rotate(numbers.rbegin(), numbers.rbegin() + 1, numbers.rend());
	}
	return numbers;
}
int main()
{
	vector<int> numbers = { 1,2,3 };

	string direction = "right";

	vector <int> res = solution(numbers, direction);

	for (int result : res)
	{
		cout << result << " ";
	}
}