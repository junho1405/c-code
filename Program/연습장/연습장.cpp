#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <limits>

using namespace std;
using namespace chrono;

int score = 0;
int autoClickers = 0;
int clickPower = 1;
int clickUpgradeCost = 10;
int autoClickerCost = 10;
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

void printUI(int remainingTime) {
    setCursorPosition(0, 0);
    cout << "------ 클리커 게임 (20초 타이머) ------      \n";
    cout << "스페이스바: 클릭 (+" << clickPower << "점) (떼면 클릭) \n";
    cout << "A 키: 자동 클릭기 구매 (" << autoClickerCost << "점)     \n";
    cout << "U 키: 클릭 업그레이드 (" << clickUpgradeCost << "점)     \n";
    cout << "Q 키: 종료                                \n";
    cout << "----------------------------------------\n";
    cout << "남은 시간: " << remainingTime << "초                   \n";
    cout << "현재 점수: " << score << "                         \n";
    cout << "자동 클릭기: " << autoClickers << "개                    \n";
    cout << "클릭당 점수: " << clickPower << "점                      \n";
    cout << "----------------------------------------\n";
}

int main() {
    system("cls");
    thread autoClickThread(autoClick);

    auto startTime = steady_clock::now();
    const int gameDuration = 20;

    bool spacePrev = false;
    bool aPrev = false;
    bool uPrev = false;
    bool qPrev = false;

    while (running) {
        int elapsedTime = duration_cast<seconds>(steady_clock::now() - startTime).count();
        int remainingTime = gameDuration - elapsedTime;

        if (remainingTime <= 0) {
            running = false;
            break;
        }

        printUI(remainingTime);

        bool spaceNow = (GetAsyncKeyState(VK_SPACE) & 0x8000);
        bool aNow = (GetAsyncKeyState('A') & 0x8000);
        bool uNow = (GetAsyncKeyState('U') & 0x8000);
        bool qNow = (GetAsyncKeyState('Q') & 0x8000);

        if (spacePrev && !spaceNow) {
            score += clickPower;
        }

        if (aPrev && !aNow) {
            if (score >= autoClickerCost) {
                score -= autoClickerCost;
                autoClickers++;
                autoClickerCost += 10;
            }
        }

        if (uPrev && !uNow) {
            if (score >= clickUpgradeCost) {
                score -= clickUpgradeCost;
                clickPower++;
                clickUpgradeCost += 10;
            }
        }

        if (qPrev && !qNow) {
            running = false;
        }

        spacePrev = spaceNow;
        aPrev = aNow;
        uPrev = uNow;
        qPrev = qNow;

        this_thread::sleep_for(chrono::milliseconds(50));
    }

    autoClickThread.join();
    system("cls");

    cout << "게임 종료! 최종 점수: " << score << endl;
    cout << "엔터를 누르면 종료됩니다..." << endl;

    // 콘솔 입력 버퍼 완전히 초기화
    FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
    cin.get(); // 엔터 입력 대기

    return 0;
}
