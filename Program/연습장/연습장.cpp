#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h> // GetAsyncKeyState
using namespace std;

int score = 0;
int autoClickers = 0;
int clickPower = 1;
int clickUpgradeCost = 10;
bool running = true;

void setCursorPosition(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void autoClick() {
    while (running) {
        if (autoClickers > 0) {
            score += autoClickers;
        }
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void printUI() {
    setCursorPosition(0, 0);
    cout << "------ 클리커 게임 ------                  \n";
    cout << "스페이스바: 클릭 (+" << clickPower << "점) (떼면 클릭) \n";
    cout << "A 키: 자동 클릭기 구매 (10점)             \n";
    cout << "U 키: 클릭 업그레이드 (" << clickUpgradeCost << "점)     \n";
    cout << "Q 키: 종료                                \n";
    cout << "----------------------------------------\n";
    cout << "현재 점수: " << score << "                         \n";
    cout << "자동 클릭기: " << autoClickers << "개                    \n";
    cout << "클릭당 점수: " << clickPower << "점                      \n";
    cout << "----------------------------------------\n";
}

int main() {
    system("cls");
    thread autoClickThread(autoClick);

    // 키 상태 저장
    bool spacePrev = false;
    bool aPrev = false;
    bool uPrev = false;
    bool qPrev = false;

    while (running) {
        printUI();

        // 현재 키 상태 읽기
        bool spaceNow = (GetAsyncKeyState(VK_SPACE) & 0x8000);
        bool aNow = (GetAsyncKeyState('A') & 0x8000);
        bool uNow = (GetAsyncKeyState('U') & 0x8000);
        bool qNow = (GetAsyncKeyState('Q') & 0x8000);

        // 스페이스바: "떼는 순간" 처리
        if (spacePrev && !spaceNow) {
            score += clickPower;
        }

        // A 키 업그레이드
        if (aPrev && !aNow) {
            if (score >= 10) {
                score -= 10;
                autoClickers++;
            }
        }

        // U 키 클릭 업그레이드
        if (uPrev && !uNow) {
            if (score >= clickUpgradeCost) {
                score -= clickUpgradeCost;
                clickPower++;
                clickUpgradeCost += 10;
            }
        }

        // Q 키 종료
        if (qPrev && !qNow) {
            running = false;
        }

        // 현재 상태를 이전 상태로 저장
        spacePrev = spaceNow;
        aPrev = aNow;
        uPrev = uNow;
        qPrev = qNow;

        this_thread::sleep_for(chrono::milliseconds(50));
    }

    autoClickThread.join();
    system("cls");
    cout << "게임 종료! 최종 점수: " << score << endl;
    return 0;
}
