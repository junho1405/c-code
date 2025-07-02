#include <iostream>
#include <windows.h>

int main() {
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;

    // 기존 모드 저장
    GetConsoleMode(hInput, &mode);

    // 입력 모드 설정 (마우스 입력 포함)
    SetConsoleMode(hInput, ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);

    INPUT_RECORD inputRecord;
    DWORD events;
    std::cout << "마우스 클릭을 감지 중입니다. 오른쪽 클릭하면 종료됩니다.\n";

    while (true) {
        ReadConsoleInput(hInput, &inputRecord, 1, &events);

        if (inputRecord.EventType == MOUSE_EVENT) {
            MOUSE_EVENT_RECORD mer = inputRecord.Event.MouseEvent;

            if (mer.dwEventFlags == 0) { // 마우스 버튼 눌림
                if (mer.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) {
                    std::cout << "왼쪽 클릭! 위치: ("
                        << mer.dwMousePosition.X << ", "
                        << mer.dwMousePosition.Y << ")\n";
                }
                else if (mer.dwButtonState & RIGHTMOST_BUTTON_PRESSED) {
                    std::cout << "오른쪽 클릭 - 프로그램 종료\n";
                    break;
                }
            }
        }
    }

    // 모드 원상복구
    SetConsoleMode(hInput, mode);

    return 0;
}
