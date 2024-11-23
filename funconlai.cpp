#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

struct Point {
    int x, y;
};
bool KiemTraAnThucAn(CONRAN &r, ThucAn &t) {
    return (r.A[0].x == t.P.x && r.A[0].y == t.P.y);
}

bool KiemTraVaCham(CONRAN &r, int width, int height) {
    if (r.A[0].x <= 0 || r.A[0].x >= width || r.A[0].y <= 0 || r.A[0].y >= height)
        return true;
    for (int i = 1; i < r.DoDai; i++) {
        if (r.A[0].x == r.A[i].x && r.A[0].y == r.A[i].y)
            return true;
    }
    return false;
}
