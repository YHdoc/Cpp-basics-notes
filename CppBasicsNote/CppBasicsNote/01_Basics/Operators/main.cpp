#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    
    // 산술 연산자
    cout << "=== 산술 연산자 ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    // 비교 연산자
    cout << "\n=== 비교 연산자 ===" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    // 논리 연산자
    cout << "\n=== 논리 연산자 ===" << endl;
    bool x = true, y = false;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    
    // 할당 연산자
    cout << "\n=== 할당 연산자 ===" << endl;
    int c = 5;
    cout << "c = " << c << endl;
    c += 3; cout << "c += 3: " << c << endl;
    c -= 2; cout << "c -= 2: " << c << endl;
    c *= 2; cout << "c *= 2: " << c << endl;
    c /= 3; cout << "c /= 3: " << c << endl;
    c %= 2; cout << "c %= 2: " << c << endl;
    
    // 증감 연산자
    cout << "\n=== 증감 연산자 ===" << endl;
    int d = 5;
    cout << "d = " << d << endl;
    cout << "++d: " << (++d) << endl;
    cout << "d++: " << (d++) << endl;
    cout << "d: " << d << endl;
    cout << "--d: " << (--d) << endl;
    cout << "d--: " << (d--) << endl;
    cout << "d: " << d << endl;
    
    return 0;
}
