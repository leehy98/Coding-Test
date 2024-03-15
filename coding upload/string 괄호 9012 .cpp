#include <iostream>
#include <string>

using namespace std;

string isVPS(const string& s) 
{
    int count = 0;
    for (char c : s) 
    {
        if (c == '(') 
        {
            count++;
        }
        else if (c == ')') 
        {
            count--;
            if (count < 0)
            {
                return "NO";
            }
        }
    }
    return (count == 0) ? "YES" : "NO";
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        string s;
        cin >> s;
        cout << isVPS(s) << '\n';
    }
    return 0;
}
