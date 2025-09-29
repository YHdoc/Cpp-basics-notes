#include <iostream>
using namespace std;

int main() {
    // if-else 문
    cout << "=== if-else 문 ===" << endl;
    int score = 85;
    if (score >= 90) {
        cout << "A등급" << endl;
    } else if (score >= 80) {
        cout << "B등급" << endl;
    } else if (score >= 70) {
        cout << "C등급" << endl;
    } else {
        cout << "D등급" << endl;
    }
    
    // switch 문
    cout << "\n=== switch 문 ===" << endl;
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "우수" << endl;
            break;
        case 'B':
            cout << "양호" << endl;
            break;
        case 'C':
            cout << "보통" << endl;
            break;
        default:
            cout << "미흡" << endl;
            break;
    }
    
    // for 문
    cout << "\n=== for 문 ===" << endl;
    cout << "1부터 5까지: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // while 문
    cout << "\n=== while 문 ===" << endl;
    int count = 1;
    cout << "1부터 5까지 (while): ";
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    
    // do-while 문
    cout << "\n=== do-while 문 ===" << endl;
    int num = 1;
    cout << "1부터 5까지 (do-while): ";
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout << endl;
    
    // break와 continue
    cout << "\n=== break와 continue ===" << endl;
    cout << "1부터 10까지 (3과 7 제외): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 3 || i == 7) {
            continue; // 3과 7은 건너뛰기
        }
        if (i == 9) {
            break; // 9에서 반복문 종료
        }
        cout << i << " ";
    }
    cout << endl;
    
    // 중첩 반복문
    cout << "\n=== 중첩 반복문 (구구단 2단) ===" << endl;
    for (int i = 1; i <= 9; i++) {
        cout << "2 × " << i << " = " << (2 * i) << endl;
    }
    
    return 0;
}
