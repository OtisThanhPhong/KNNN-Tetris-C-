#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;
// Hàm tiện ích: Di chuyển con trỏ dòng lệnh đến tọa độ (cx, cy) để phục vụ vẽ bàn cờ
void gotoxy(int cx, int cy) {
    COORD c = { (SHORT)(cx * 2), (SHORT)cy };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    