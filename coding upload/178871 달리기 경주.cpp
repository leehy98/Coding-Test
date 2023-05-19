#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// map에 대한 참조 사이트 https://life-with-coding.tistory.com/305
//STL인 map를 사용해 players 의 인덱스를 복사한다. callings, positions를 비교하면서 players 의 인덱스를 바꾼다. 그 후 바뀐 정보를 positions에 업데이트 해준다.

vector<string> solution(vector<string> players, vector<string> callings) 
{
    // 선수의 이름(key)과 위치(value)를 가져온다.
    map<string,int> positions;
    for (int i = 0; i< players.size();i++)
    {
        positions[players[i]] = i;
    }
    // 가져온 value를 position에 저장. swap함수를 사용해 해당 자리에 있는 선수끼리 자리를 바꾼다.
    for (auto& name : callings)
    {
        int position = positions[name];
        swap(players[position - 1], players[position]);
        // 바뀐 선수는 앞으로 가고,
        positions[name] = position - 1;
        // 뺀 선수는 자리를 업데이트 해준다.
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