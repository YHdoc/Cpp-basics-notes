#include <iostream>
#include <string>
using namespace std;

int main() {
    // 정수형 데이터 타입
    short shortNum = 32767;
    int intNum = 2147483647;
    long longNum = 2147483647L;
    long long longLongNum = 9223372036854775807LL;
    
    // 부동소수점 데이터 타입
    float floatNum = 3.14f;
    double doubleNum = 3.14159265359;
    long double longDoubleNum = 3.141592653589793238L;
    
    // 문자형 데이터 타입
    char charValue = 'A';
    wchar_t wideChar = L'한';
    
    // 불린형 데이터 타입
    bool boolValue = true;
    
    // 문자열 데이터 타입
    string str = "Hello, C++!";
    
    // 각 데이터 타입의 크기 출력
    cout << "=== 데이터 타입 크기 ===" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    
    // 값 출력
    cout << "\n=== 값 출력 ===" << endl;
    cout << "short: " << shortNum << endl;
    cout << "int: " << intNum << endl;
    cout << "long: " << longNum << endl;
    cout << "long long: " << longLongNum << endl;
    cout << "float: " << floatNum << endl;
    cout << "double: " << doubleNum << endl;
    cout << "long double: " << longDoubleNum << endl;
    cout << "char: " << charValue << endl;
    cout << "wchar_t: " << wideChar << endl;
    cout << "bool: " << boolValue << endl;
    cout << "string: " << str << endl;
    
    return 0;
}
