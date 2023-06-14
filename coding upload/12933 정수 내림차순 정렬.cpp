#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// to_String ���� �Ű����� n�� ���ڿ��� ��ȯ �� srot �� �� ���ڿ��� �ε����� ���ϰ� greater �� ������������ �����ϰ� stoll�� �ٽ� ������ ��ȯ�Ѵ�
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