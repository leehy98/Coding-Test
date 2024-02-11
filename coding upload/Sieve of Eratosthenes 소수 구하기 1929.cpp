#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;
    vector<bool> isPrime(M + 1, true); // �Ҽ� ���θ� ������ ����, ��� ���� true�� �ʱ�ȭ

    isPrime[0] = isPrime[1] = false; // 0�� 1�� �Ҽ��� �ƴ�

    // �����佺�׳׽��� ü �˰��� ����
    for (int i = 2; i <= sqrt(M); i++) 
    {
        if (isPrime[i]) 
        { // i�� �Ҽ��� ���
            for (int j = i * i; j <= M; j += i) 
            {
                isPrime[j] = false; // i�� ����� �Ҽ��� �ƴ�
            }
        }
    }

    // �Ҽ� ���
    for (int i = N; i <= M; i++) 
    {
        if (isPrime[i]) //false�� �ƴ� true�� �ε��� ���
        {
            cout << i << '\n';
        }
    }
}
