#include <iostream>
using namespace std;

int main() {
    // 변수 선언과 초기화
    int age = 25;
    double height = 175.5;
    char grade = 'A';
    string name = "홍길동";
    bool isStudent = true;
    
    // 변수 출력
    cout << "이름: " << name << endl;
    cout << "나이: " << age << "세" << endl;
    cout << "키: " << height << "cm" << endl;
    cout << "성적: " << grade << endl;
    cout << "학생 여부: " << (isStudent ? "예" : "아니오") << endl;
    
    // 변수 값 변경
    age = 26;
    cout << "\n나이 변경 후: " << age << "세" << endl;
    
    return 0;
}
