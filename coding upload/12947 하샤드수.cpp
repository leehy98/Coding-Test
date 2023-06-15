#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x)
{
	int sum = 0;
	string X = to_string(x);
	for (char c : X) 
	{
		sum += c - '0'; 
	}
	return x % sum == 0; 
}
int main()
{
	int x = 13;
	bool result = solution(x);
	cout << result;
}