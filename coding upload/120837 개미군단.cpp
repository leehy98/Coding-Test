#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ��ɰ��� ü�� hp�� �Ű������� �־��� ��, ��ɰ��� ü�¿� �� �°� �ּ����� ������ �����Ϸ��� �� ������ ���̰� �ʿ������� return�ϵ��� solution �Լ��� �ϼ����ּ���.
// ������ ���ݷ� : �屺5 ����3 �ϲ� 1
// �׸��� �˰����� Ȱ��
// for������ ��ȸ�ϸ鼭 ants ���� ������ ���ݷ� ������� ��ɰ��� ü�¿��� ������ ���ݷ��� �� ���� count ������ ���� 
//Hp�� 23�̴� count�� 4�� ����ǰ� �������� 3�̵Ǵ� 3/3 = 0 �̵Ǹ� ��ɰ��� ���� ������ ���� 5����
int solution(int Hp)
{
	int count = 0;
	vector <int> ants = { 5,3,1 };
	for (int ant : ants)
	{
		count += Hp / ant;
		Hp %= ant;
	}
	return count;
}

int main()
{
	int Hp = 23;
	int result = solution(Hp);
	cout << result;
	return 0;
}
