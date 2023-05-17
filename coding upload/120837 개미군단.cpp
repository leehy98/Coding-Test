#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 사냥감의 체력 hp가 매개변수로 주어질 때, 사냥감의 체력에 딱 맞게 최소한의 병력을 구성하려면 몇 마리의 개미가 필요한지를 return하도록 solution 함수를 완성해주세요.
// 개미의 공격력 : 장군5 병정3 일꾼 1
// 그리디 알고리즘을 활용
// for문으로 순회하면서 ants 에서 개미의 공격력 순서대로 사냥감의 체력에서 개미의 공격력을 뺀 몫을 count 변수에 저장 
//Hp가 23이니 count에 4가 저장되고 나머지는 3이되니 3/3 = 0 이되며 사냥감을 잡을 개미의 수는 5마리
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
