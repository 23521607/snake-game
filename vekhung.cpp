class VeKhung {
public:
    int width, height;
    VeKhung(int w, int h) : width(w), height(h) {}

    void Ve() {
        setColor(7);
        for (int i = 0; i <= width; i++) {
            gotoxy(i, 0); cout << char(219);
            gotoxy(i, height); cout << char(219);
        }
        for (int i = 0; i <= height; i++) {
            gotoxy(0, i); cout << char(219);
            gotoxy(width, i); cout << char(219);
        }
    }
};
