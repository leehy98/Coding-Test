#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, int num1, int num2)
{
	swap(my_string[num1], my_string[num2]);
	return my_string;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	string my_string = "hello";
	string result = solution(my_string, num1, num2);
	cout << result;
}