#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> array)
{
	int maxVal = array[0];
	int maxIdx = 0;
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] > maxVal)
		{
			maxVal = array[i];
			maxIdx = i;
		}

	}
	return vector<int> {maxVal, maxIdx};
}
int main()
{
	vector<int> array = { 1,8,3 };
	vector<int> result = solution(array);
	for (int res : result)
	{
		cout << res << " ";
	}
}