#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//rotate : template <class ForwardIterator>  ForwardIterator rotate (ForwardIterator first, ForwardIterator middle, ForwardIterator last);
//	first : 회전 범위 시작 , middle : 회전하여 첫 요소가 될 범위 내 interator , last : 회전할 범위의 마지막 interator , last가 가리키는 원소는  범위에 포함 x 
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