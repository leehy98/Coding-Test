#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer;
	int count = 0;
	int Count = 0;
	for (char S : s)
	{
		if (S == 'p' || S == 'P')
		{
			count++;
		}
		if (S == 'y' || S == 'Y')
		{
			Count++;
		}
	}
	if (count == Count)
	{
		answer = true;
	}
	else 
	{
		answer = false;
	}

	return answer;
}
int main()
{
	string s = "pPoooY";
	bool Result = solution(s);
	cout << Result << endl;
}