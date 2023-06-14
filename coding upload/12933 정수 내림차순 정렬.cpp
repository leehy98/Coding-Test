#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// to_String 으로 매개변수 n을 문자열로 변환 후 srot 로 각 문자열의 인덱스를 비교하고 greater 로 내림차순으로 정렬하고 stoll로 다시 정수로 변환한다
long long solution(long long n) {
    string N = to_string(n);
    sort(N.begin(), N.end(), greater<char>());
    return stoll(N);
}
int main()
{
    long long n = 14632;
    long long result = solution(n);

    cout << result;
}