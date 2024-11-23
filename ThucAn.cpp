class ThucAn {
public:
    Point P;
    int colorFood = 4;

    ThucAn(int w, int h) {
        srand(time(0));
        TaoMoi(w, h);
    }

    void TaoMoi(int w, int h) {
        P.x = rand() % (w - 2) + 1;
        P.y = rand() % (h - 2) + 1;
    }

    void Ve() {
        setColor(colorFood);
        gotoxy(P.x, P.y);
        cout << "*";
    }
};
