# C++ 학습 프로젝트 실행 가이드

## 명령줄로 실행하는 방법

### 기본 실행 방법
1. **명령 프롬프트(cmd) 열기** (PowerShell보다 한글 표시가 좋음)
2. **한글 인코딩 설정**
   ```bash
   chcp 65001
   ```
3. **해당 폴더로 이동**
   ```bash
   cd "CppBasicsNote\01_Basics\Variables"
   ```
4. **컴파일 및 실행**
   ```bash
   g++ main.cpp -o main.exe
   main.exe
   ```

### 한 번에 컴파일하고 실행
```bash
g++ main.cpp -o main.exe && main.exe
```

### Visual Studio 컴파일러 사용 (MSVC)
```bash
cl main.cpp
main.exe
```

## 프로젝트 구조

```
CppBasicsNote/
├── 01_Basics/
│   ├── Variables/
│   │   └── main.cpp
│   ├── DataTypes/
│   │   └── main.cpp
│   └── ...
├── 02_Functions/
│   ├── FunctionBasics/
│   │   └── main.cpp
│   └── ...
└── ...
```

## 실행 예시

### Variables 예제 실행
```bash
chcp 65001
cd "CppBasicsNote\01_Basics\Variables"
g++ main.cpp -o main.exe
main.exe
```

### Functions 예제 실행
```bash
chcp 65001
cd "CppBasicsNote\02_Functions\FunctionBasics"
g++ main.cpp -o main.exe
main.exe
```

## 팁
- **한글 인코딩 문제**: `chcp 65001` 명령어로 UTF-8 인코딩 설정
- **명령 프롬프트 사용**: PowerShell보다 cmd에서 한글이 더 잘 표시됨 (파워셀에서 chcp 가 안 먹힌다. 이유는 모름?)
