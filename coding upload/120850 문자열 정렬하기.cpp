#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

//문자열 my_string이 매개변수로 주어질 때, my_string 안에 있는 숫자만 골라 오름차순 정렬한 리스트를 return 하도록 solution 함수를 작성해보세요.

// isdigit 함수를 사용해 char로 변환한 str 문자열에 정수로 변환 가능한 문자를 정수로 변환한 후 '0'를 빼준 후
//answer에 push.back 한 다음  sort 함수를 사용해 오름 차순으로 정렬후 출력
using namespace std;

vector<int> solution(string my_string)
{
	vector<int> answer;

	for (char str : my_string)
	{
		if (isdigit(str))
		{
			answer.push_back(str - '0');
		}

	}
	sort(answer.begin(), answer.end());
	return answer;
}

int main()
{
	string my_string = "hi12392";
	vector<int> result = solution(my_string);
	for (int results : result)
	{
		cout << results << ",";
	}
}