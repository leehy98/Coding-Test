#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    std::unordered_map<std::string, int> map;

    // 요소 삽입
    map["apple"] = 1;
    map["banana"] = 2;
    map["cherry"] = 3;

    map.insert({ "abc",4 });
    map.insert(make_pair("efg",5));

    // 요소 접근
    std::cout << "apple: " << map["apple"] << std::endl;
   
    // 맵 순회
    for (const auto& pair : map)
    {
        std::cout << pair.first << " : " << pair.second << std::endl;

    }
    // 요소 삭제
    map.erase("banana");

    // 요소 검색
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