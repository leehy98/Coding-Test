#include <string>
#include <vector>
#include <map>
#include<iostream>
using namespace std;
/*
0 1 2 3 10 11 자식 없음
4 5 6 7 9 자식 있음
8 한쪽만 자식 있음
각 번호에 맞는 노드 찾아서 최소값 구한다음 리턴 

트리를 순회하면서 각 노드에 대해 자식이 없는 노드들을 찾습니다. 이들을 서로 묶어서 처리합니다.

각 노드의 자식 노드가 있는 경우, 해당 노드의 자식 노드들과 그들의 자식 노드를 포함한 모든 자식 노드들의 인원을 더합니다.

이를 통해 각 노드를 기준으로 구한 인원의 합을 기록하고, 이 중에서 가장 큰 그룹의 인원을 최소화해야 합니다.

3	[12, 30, 1, 8, 8, 6, 20, 7, 5, 10, 4, 1]	[[-1, -1], [-1, -1], [-1, -1], [-1, -1], [8, 5], [2, 10], [3, 0], [6, 1], [11, -1], [7, 4], [-1, -1], [-1, -1]]	40
1	[6, 9, 7, 5]	[[-1, -1], [-1, -1], [-1, 0], [2, 1]]	27
2	[6, 9, 7, 5]	[[-1, -1], [-1, -1], [-1, 0], [2, 1]]	14
4	[6, 9, 7, 5]	[[-1, -1], [-1, -1], [-1, 0], [2, 1]]	9

*/ 
int solution(int k,  vector<int> num, vector<vector<int>> links) {
	int answer = 0;  
	vector<int>NoChildNode;
	vector<int>HasChildNode;
	vector<int>HalfChildNode;

	for (int i = 0; i < links.size(); i++)
	{
		int ChildCount = 0;
		for (int j = 0; j < links[i].size(); j++)
		{
			if (links[i][j] > -1)
			{
				ChildCount++;
			}
		}
		if (ChildCount == 0)
		{
			NoChildNode.push_back(i);
		}
		else if(ChildCount == 2)
		{
			HasChildNode.push_back(i);
		}
		else
		{
			HalfChildNode.push_back(i);
		}
		for (const auto& link : links)
		{
			if (link[i] == HasChildNode[i] - 5)
			{

			}
			
		}
	}
	
	return answer; // 최소화된 최대 그룹수 인원 리턴 (제일 큰 그룹의 그룹수 인원)
}

int main()
{
	int group = 3; // 나눌 그룹 수
	vector<int>num = { 12, 30, 1, 8, 8, 6, 20, 7, 5, 10, 4, 1 }; // 그룹수 인원
	vector<vector<int>> links = 
	{ 
		{ -1, -1 }, { -1, -1},{ -1, -1},{ -1, -1},{8, 5},{2, 10},
		{3, 0},{6, 1},{11, -1},{7, 4},{-1, -1},{ -1, -1} 
	}; // 자식 노드 번호
	
	return 0;
}

