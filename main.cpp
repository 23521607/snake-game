int main() {
    int width = 50, height = 20;
    VeKhung khung(width, height);
    CONRAN r;
    ThucAn t(width, height);
    int Huong = 0;
    char key;
    int speed = 200;

    khung.Ve();
    t.Ve();

    while (1) {
        if (kbhit()) {
            key = getch();
            if (key == 'a' && Huong != 0) Huong = 2;
            if (key == 'w' && Huong != 1) Huong = 3;
            if (key == 'd' && Huong != 2) Huong = 0;
            if (key == 's' && Huong != 3) Huong = 1;
        }

        r.DiChuyen(Huong);
        r.Ve();

        if (KiemTraAnThucAn(r, t)) {
            r.ThemDoDai();
            t.TaoMoi(width, height);
            t.Ve();
            speed = max(30, speed - 5);
        }

        if (KiemTraVaCham(r, width, height)) {
            gotoxy(width / 2 - 5, height / 2);
            setColor(7);
            cout << "Game Over!";
            break;
        }

        Sleep(speed);
    }

    setColor(7);
    return 0;
}
