#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// map�� ���� ���� ����Ʈ https://life-with-coding.tistory.com/305
//STL�� map�� ����� players �� �ε����� �����Ѵ�. callings, positions�� ���ϸ鼭 players �� �ε����� �ٲ۴�. �� �� �ٲ� ������ positions�� ������Ʈ ���ش�.

vector<string> solution(vector<string> players, vector<string> callings) 
{
    // ������ �̸�(key)�� ��ġ(value)�� �����´�.
    map<string,int> positions;
    for (int i = 0; i< players.size();i++)
    {
        positions[players[i]] = i;
    }
    // ������ value�� position�� ����. swap�Լ��� ����� �ش� �ڸ��� �ִ� �������� �ڸ��� �ٲ۴�.
    for (auto& name : callings)
    {
        int position = positions[name];
        swap(players[position - 1], players[position]);
        // �ٲ� ������ ������ ����,
        positions[name] = position - 1;
        // �� ������ �ڸ��� ������Ʈ ���ش�.
        positions[players[position]] = position;
      
    }
    return players;
}

int main()
{
    vector<string> players = { "mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings = { "kai", "kai", "mine", "mine" };

    vector<string>result = solution(players, callings);
    for (auto res : result)
    {
        cout << res << " ";
    }
}