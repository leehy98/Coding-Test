#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited;
vector<vector<int>> network;

int VirusCheck(int computer) 
{
	visited[computer] = true;
	int count = 0;

	for (int i = 0; i < network[computer].size(); i++)  
	{
		int connected = network[computer][i]; 
		if (!visited[connected]) 
		{
			count += VirusCheck(connected) + 1;
		}
	}

	return count;
}

int main() 
{
	int Computer, ConnectedNetworkNum;
	cin >> Computer >> ConnectedNetworkNum;

	network.resize(Computer + 1);
	visited.resize(Computer + 1, false);

	for (int i = 0; i < ConnectedNetworkNum; i++) 
	{
		int computerNum, computerNumPair;
		cin >> computerNum >> computerNumPair;
		network[computerNum].push_back(computerNumPair);
		network[computerNumPair].push_back(computerNum);
	}

	cout << VirusCheck(1);
	return 0;
}