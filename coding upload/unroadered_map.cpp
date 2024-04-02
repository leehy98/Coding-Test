#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    std::unordered_map<std::string, int> map;

    // ��� ����
    map["apple"] = 1;
    map["banana"] = 2;
    map["cherry"] = 3;

    map.insert({ "abc",4 });
    map.insert(make_pair("efg",5));

    // ��� ����
    std::cout << "apple: " << map["apple"] << std::endl;
   
    // �� ��ȸ
    for (const auto& pair : map)
    {
        std::cout << pair.first << " : " << pair.second << std::endl;

    }
    // ��� ����
    map.erase("banana");

    // ��� �˻�
    if (map.find("banana") != map.end()) 
    {
        std::cout << "banana found" << std::endl;
    }
    else
    {
        std::cout << "banana not found" << std::endl;

    }

    return 0;
}