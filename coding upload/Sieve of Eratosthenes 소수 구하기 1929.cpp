#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;
    vector<bool> isPrime(M + 1, true); // 소수 여부를 저장할 벡터, 모든 값은 true로 초기화

    isPrime[0] = isPrime[1] = false; // 0과 1은 소수가 아님

    // 에라토스테네스의 체 알고리즘 적용
    for (int i = 2; i <= sqrt(M); i++) 
    {
        if (isPrime[i]) 
        { // i가 소수인 경우
            for (int j = i * i; j <= M; j += i) 
            {
                isPrime[j] = false; // i의 배수는 소수가 아님
            }
        }
    }

    // 소수 출력
    for (int i = N; i <= M; i++) 
    {
        if (isPrime[i]) //false가 아닌 true의 인덱스 출력
        {
            cout << i << '\n';
        }
    }
}
