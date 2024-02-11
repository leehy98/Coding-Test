#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    string str;
    cin >> str;

    vector<string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    int count = 0;
    for (int i = 0; i < str.length(); i++) 
    {
        for (string& Croatia : croatia) 
        {
            if (str.substr(i, Croatia.length()) == Croatia) 
            {
                i += Croatia.length() - 1; 
                break;
            }
        }
        count++; 
    }   

    cout << count;
    return 0;
}
