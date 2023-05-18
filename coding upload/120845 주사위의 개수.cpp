#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 주어진 상자의 각 차원을 주사위의 한 변의 길이로 나눈후 각 차원에 배치할수있는 주사위 개수를 모두 곱하면 박스에 들어가는 주사위 개수를 구할수있다.
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