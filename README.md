# Embedded_Basic
### 운영체제(OS)  
하드웨어를 관리하는 프로그램이다.  
사용자와 하드웨어 사이의 중개자  
하드웨어를 관리하는 모든 역할을 수행   
### 리눅스(Linux)  
**Linux**는 OS가 아닌 커널이다.
  OS자체가 아닌, OS의 핵심 소스코드 역할인 "**커널**"이다.  
  OS = App + Shell + 커널로 구분될 수 있음  
  Linux는 Kernel이다.  
  Linux에 App,Shell을 추가하여 만든 하나의 운영체제를 "**리눅스 배포판**"이라고 한다.

### 우분투(Ubuntu)  
우분투는 리눅스 배포판 중 하나이다.
  오픈 소스이며 리눅스 배포판 중 가장 널리 쓰이는 배포판이다.

### 쉘(Shell)
Shell은 시스템 사용자와 커널과의 **인터페이스를 제공하는 프로그램**이다.
  컴퓨터를 켜면 OS가 부팅된 후, 실행되는 프로그램
  Shell에는 두 가지 종류가 있다.
  1. CLI Shell : 글자 기반 인터페이스
  2. GUI Shell : 그래픽 기반 인터페이스
### Shell Command
- 터미널 창 열기 : Ctrl + Alt + T (단축키)
- 터미널 창 닫기 : Ctrl + Shift + w
- ls :  현재 있는 디렉토리 내 목록 출력
- ls -al : a 옵션: all,숨김 파일까지 출력
           l 옵션 : list, 리스트 형태로 상세 보기
- cd
  
     • cd .. : 상위디렉토리로이동하기
  
     • cd “디렉토리이름” : 해당디렉토리로이동하기
  
     • cd ~ :홈디렉토리로이동하기
  
     • cd- : 이전디렉토리로되돌아가기
  
- pwd : 현재 디렉토리 확인
- clear : 화면 지우기
**주의**
  복사 붙여넣기 단축키는 터미널 창에서는 Ctrl + Insert / Shift + Insert 를 사용할 것

### 파일관리 명령어  
- touch [파일명] : 새로운 빈 파일을 생성한다.
- rm [파일명] : 파일을 삭제한다.
- mkdir [디렉토리명] : 디렉토리가 생성된다.
- rmdir [디렉토리명] : 디렉토리를 삭제한다.
  **rm -r [디렉토리명]**를 사용하면 디렉토리 내부 파일까지 모두 삭제 가능!
- mv [파일명] : 이동 : mv [파일] [옮길 곳]
                이름변경 : mv [파일] [파일이름]
- cp [파일명] [경로] : 파일을 특정 경로로 복사하기
                      -r 옵션 : 디렉토리 복사하기

### vi
vi(visual editor) : 화면 기반 Text Editor
vim (vi improve) : vs code의 원조, 플러그인 설치 가능하도록 vi의 업그레이드 판
#### vi를 실행해보자!
- vi [파일명]
- vi ./sample.txt
![image](https://github.com/kghees/Embedded_Basic/assets/92205960/b8b93184-99bf-4901-87c7-91e26730901d)
- vi를 실행하면 초기 command mode로 진입하게 된다.
![image](https://github.com/kghees/Embedded_Basic/assets/92205960/32b7d304-18e7-4df7-a7f9-bf27ba640e19)
- vi에 텍스트를 입력하려면 **"i"** 키를 누르고 입력한 후 저장하기 위해서는 command mode를 빠져나와 ESC키 누른 후 **:wq**입력해서 저장하면 된다.(w:저장,q:종료)(q!:강제종료)
  
***vi 기본 모드 세가지***
  1. command mode : 명령어 입력, 처음 실행 화면, ESC키로 진입
  2. insert mode : 텍스트 입력 / 편집, command mode에서 i 입력해서 진입
  3. visual mode : 텍스트 선택 / 편집, command mode에서 v 입력해서 진입

**command 명령어들**
- gg : 페이지 상단 이동
- G : 페이지 하단 이동
- u : 실행 취소
- ctrl + r : 다시 실행
- /[검색어] : 다음 검색 :n, 이전 검색 : N ex) /hello 입력 후 엔터 하고 N/n눌러가면서 검색
- %s/[검색어]/[변경]/g : 바꾸기 (g:global의 약어로, 파일 전체의 단어를 바꾸는 필수 옵션)
  
## ECHO BOT 제작 Mini Project      
### 동작  
- 사용자의 입력을 기다렸다가 입력 받은 문자열을 그대로 출력하는 프로그램
- "exit" 혹은 "bye" 문자열 입력 시, 프로그램 종료 되는 BOT
  
**bulid code**
```
gcc ./ssafy_bot.c -o ./gogo
./gogo
```
#### 결과화면
![image](https://github.com/kghees/Embedded_Basic/assets/92205960/a87efb23-9ac2-4493-afc5-ae13634c5153)  


### Build System  
- Build할 때 필요한 여러 작업을 도와주는 프로그램들
  ex) make

### make  
- 소프트웨어 빌드 자동화 도구
- 소스 코드 파일로부터 실행 파일이나 라이브러리 등을 생성하는 데 사용된다.
- 주로 C, C++ 그리고 다른 컴파일 가능한 언어의 프로젝트에서 사용됨.
- Makefile이라는 특별한 형식의 파일을 사용한다.
#### Make Build System의 장점 두가지  
1. Build 자동화
     기술된 순서대로 Build 작업을 수행하는 자동화 스크립트 지원
2. Build 속도 최적화
     불필요한 Compile & Assemble 피하기
     파일 간의 의존성을 추적하여, 파일이 변경된 경우에만 컴파일한다!

## SSAFY 쉘 제작하기 Project  
• 프롬프트 : SSAFY > _  

• 1 단계, 명령어 입력  
  • date 입력시 : date 출력  

  • uptime 입력 : uptime 출력  

  • ls 입력시 : ls –al 결과 출력  

  • log 입력시 : dmesg 출력  

  • exit 입력시 : 쉘 종료  

  • 정확하지 않는 명령어 입력시 : “ERROR”;  

• 2 단계, history 입력  

  • 명령어 입력한 내역 모두 출력하기 (번호와 함께 입력)  

  • ! 번호 입력 시 해당 명령어 입력하기  

  • “hclear” 입력시 history 모두 삭제  

Makefile.c 제작해서 build  
```
1. vi Makefile.c 로 c파일 만들어서 안에 코드 작성
2. gcc ./Makefile.c -o ./ssafy 로 Build 시켜주기
3. ./ssafy로 실행
```
![image](https://github.com/kghees/Embedded_Basic/assets/92205960/1325ee14-b109-42e6-a3c2-3ce14da4535f)  
![image](https://github.com/kghees/Embedded_Basic/assets/92205960/c44ff0b3-9940-4816-acb2-8ed5d80da0e5)

