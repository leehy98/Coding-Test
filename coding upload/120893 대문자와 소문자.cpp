#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//아스키(ASCII) 코드는 7비트를 사용하는데, 이것은 아스키가 처음 개발되었을 때(1960년대)의 기술적 제약사항 때문입니다.
//초기 컴퓨터 시스템에서는 메모리와 처리 능력이 굉장히 제한적이었습니다.따라서, 간단한 문자 인코딩을 위해 가능한 한 적은 비트를 사용하는 것이 이상적이었습니다.
//이 또한 데이터 통신의 초기 모뎀은 7 비트 데이터를 전송하도록 설계되었습니다.이러한 모뎀과 호환성을 유지하려면 아스키 코드도 7비트를 사용해야 했습니다.
//그러나, 각 바이트에 더 많은 정보를 저장하기 위해 8 비트를 사용하는 컴퓨터 시스템이 널리 사용되기 시작하면서, 
//이 8 번째 비트는 추가적인 문자(특수 문자, 다른 알파벳, 기호 등) 또는 오류 감지와 같은 다른 목적으로 사용되기 시작했습니다.
//그래서 현재는 대부분의 시스템에서 확장된 아스키 코드인 ISO 8859 - 1 (또는 Latin - 1) 또는 Unicode를 사용하며, 
//이는 각 문자를 나타내는 데 더 많은 비트를 사용하여 더 많은 문자와 기호를 나타낼 수 있습니다.
//대문자와 소문자는 6번째오는 비트가 다르기때문에 비트 XOR 연산을 사용하여 6번째 오는 비트값을 반전시켜 대문자와 소문자를 바꾼다.
// 예시
// a 1100001
// A 1000001
// 비트는 오른쪽부터 읽는게 보편적이다
string solution(string my_string)
{
	string answer = "";
	for (char str : my_string)
	{
		answer += str ^ 32;
	}
	return answer;
}

int main()
{
	string my_string = "AAAaaa";
	string result = solution(my_string);
	cout << result;
	return 0;
}
