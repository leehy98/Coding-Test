#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 가위는 2 바위는 0 보는 5로 표현합니다. 가위 바위 보를 내는 순서대로 나타낸 문자열 rsp가 매개변수로 주어질 때, 
//rsp에 저장된 가위 바위 보를 모두 이기는 경우를 순서대로 나타낸 문자열을 return하도록 solution 함수를 완성해보세요.

//for문으로 rsp 루프돌리면서 switch문 으로 해당 케이스에 맞는 문자를 answer에 저장후 리턴

string solution(string rsp)
{
	string answer = "";
	for (char RSP : rsp)
	{
		switch (RSP)
		{
		case '2':
			answer += '0';
			break;
		case '0':
			answer += '5';
			break;
		case '5':
			answer += '2';
			break;
		}
	}
	return answer;
}

int main()
{
	string rsp = "255";
	string result = solution(rsp);
	cout << result;
	return 0;
}
