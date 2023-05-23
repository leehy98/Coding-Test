#include <string>
#include <vector>
#include <iostream>
using namespace std;
// 그리디 알고리즘 : 그리디알고리즘은 말 그대로 선택의 순간마다 당장 눈앞에 보이는 최적의 상황만을 쫓아 최종적인 해답에 도달하는 방법이다

int solution(int n, int m, vector<int> section)
{
	int answer = 1; // 최소  1번은 칠해야하니 1
	int num = section[0] + m - 1; // 칠 범위 지정 : section의 0번째 인덱스(2) + 롤러 범위(4) - 1
												//ex) 2번부터 칠해야하니까 4미터 롤러로 돌리면 2 3 4 5 가 칠해지기 때문
	for (int i = 1; i < section.size(); i++) // for문으로 section 순회 
	{

		if (num < section[i]) // 만약 num이 section 의 인덱스보다 작으면 
		{
			num = section[i] + m - 1; // 다음 범위를 지정 
			answer++;					   // 칠하는 횟수 증가
		}

	}
	return answer;
}
int main()
{
	int n = 8;
	int m = 4;
	vector<int> section = { 2,3,6 };
	int Result = solution(n, m, section);
	cout << Result << " ";
}
