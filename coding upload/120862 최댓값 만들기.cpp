#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.
// numbers	result
// [1, 2, -3, 4, -5] 15
// [0, -31, 24, 10, 1, 9]	240
// [10, 20, 30, 5, 5, 20, 5]	600
// 배열에 음수가 존재할수도 있으니 sort를 사용해 오름차순으로 정렬후 0,1번째 인덱스와 배열의 마지막과 마지막 전의 인덱스의 곱을 max로 비교해 더 큰 값을 리턴
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