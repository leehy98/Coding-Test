#include <string>
#include <vector>
#include <map>
#include<iostream>
using namespace std;
/*
0 1 2 3 10 11 �ڽ� ����
4 5 6 7 9 �ڽ� ����
8 ���ʸ� �ڽ� ����
�� ��ȣ�� �´� ��� ã�Ƽ� �ּҰ� ���Ѵ��� ���� 

Ʈ���� ��ȸ�ϸ鼭 �� ��忡 ���� �ڽ��� ���� ������ ã���ϴ�. �̵��� ���� ��� ó���մϴ�.

�� ����� �ڽ� ��尡 �ִ� ���, �ش� ����� �ڽ� ����� �׵��� �ڽ� ��带 ������ ��� �ڽ� ������ �ο��� ���մϴ�.

�̸� ���� �� ��带 �������� ���� �ο��� ���� ����ϰ�, �� �߿��� ���� ū �׷��� �ο��� �ּ�ȭ�ؾ� �մϴ�.

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
	
	return answer; // �ּ�ȭ�� �ִ� �׷�� �ο� ���� (���� ū �׷��� �׷�� �ο�)
}

int main()
{
	int group = 3; // ���� �׷� ��
	vector<int>num = { 12, 30, 1, 8, 8, 6, 20, 7, 5, 10, 4, 1 }; // �׷�� �ο�
	vector<vector<int>> links = 
	{ 
		{ -1, -1 }, { -1, -1},{ -1, -1},{ -1, -1},{8, 5},{2, 10},
		{3, 0},{6, 1},{11, -1},{7, 4},{-1, -1},{ -1, -1} 
	}; // �ڽ� ��� ��ȣ
	
	return 0;
}

