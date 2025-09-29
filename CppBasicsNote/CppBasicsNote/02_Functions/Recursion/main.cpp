#include <iostream>
using namespace std;

// 팩토리얼 계산 (재귀)
long long factorial(int n) {
    // 기본 케이스 (Base Case)
    if (n <= 1) {
        return 1;
    }
    // 재귀 케이스 (Recursive Case)
    return n * factorial(n - 1);
}

// 피보나치 수열 (재귀)
int fibonacci(int n) {
    // 기본 케이스
    if (n <= 1) {
        return n;
    }
    // 재귀 케이스
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 거듭제곱 계산 (재귀)
int power(int base, int exp) {
    // 기본 케이스
    if (exp == 0) {
        return 1;
    }
    // 재귀 케이스
    return base * power(base, exp - 1);
}

// 배열의 합 계산 (재귀)
int arraySum(int arr[], int size) {
    // 기본 케이스
    if (size == 0) {
        return 0;
    }
    // 재귀 케이스
    return arr[size - 1] + arraySum(arr, size - 1);
}

// 하노이 탑 (재귀)
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "원판 1을 " << from << "에서 " << to << "로 이동" << endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << "원판 " << n << "을 " << from << "에서 " << to << "로 이동" << endl;
    hanoi(n - 1, aux, to, from);
}

int main() {
    cout << "=== 재귀 함수 예제 ===" << endl;
    
    // 팩토리얼
    cout << "\n=== 팩토리얼 ===" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
    
    // 피보나치 수열
    cout << "\n=== 피보나치 수열 ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    
    // 거듭제곱
    cout << "\n=== 거듭제곱 ===" << endl;
    cout << "2^5 = " << power(2, 5) << endl;
    cout << "3^4 = " << power(3, 4) << endl;
    
    // 배열의 합
    cout << "\n=== 배열의 합 ===" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "배열: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n합계: " << arraySum(arr, size) << endl;
    
    // 하노이 탑
    cout << "\n=== 하노이 탑 (3개 원판) ===" << endl;
    hanoi(3, 'A', 'C', 'B');
    
    return 0;
}
