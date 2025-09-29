#include <iostream>
using namespace std;

// 함수 선언 (프로토타입)
int add(int a, int b);
void printMessage(string message);
int getMax(int a, int b, int c);

// 함수 정의
int add(int a, int b) {
    return a + b;
}

void printMessage(string message) {
    cout << "메시지: " << message << endl;
}

int getMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// 기본값이 있는 함수
void greet(string name = "익명") {
    cout << "안녕하세요, " << name << "님!" << endl;
}

// 함수 오버로딩
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "=== 함수 기본 ===" << endl;
    
    // 함수 호출
    int result = add(5, 3);
    cout << "5 + 3 = " << result << endl;
    
    // void 함수 호출
    printMessage("C++ 함수를 배우고 있습니다!");
    
    // 여러 매개변수 함수
    int maxValue = getMax(10, 25, 15);
    cout << "최대값: " << maxValue << endl;
    
    // 기본값이 있는 함수
    cout << "\n=== 기본값이 있는 함수 ===" << endl;
    greet(); // 기본값 사용
    greet("홍길동"); // 매개변수 전달
    
    // 함수 오버로딩
    cout << "\n=== 함수 오버로딩 ===" << endl;
    cout << "정수 곱셈: " << multiply(3, 4) << endl;
    cout << "실수 곱셈: " << multiply(3.5, 2.5) << endl;
    
    return 0;
}
