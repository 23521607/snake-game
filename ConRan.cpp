class CONRAN {
public:
    Point A[100];
    int DoDai;
    int colorBody = 2;

    CONRAN() {
        DoDai = 3;
        A[0].x = 5; A[0].y = 5;
        A[1].x = 4; A[1].y = 5;
        A[2].x = 3; A[2].y = 5;
    }

    void Ve() {

        setColor(colorBody);
        for (int i = 0; i < DoDai; i++) {
            gotoxy(A[i].x, A[i].y);
            cout << char(254);
        }
    }

    void XoaDuoi() {
        gotoxy(A[DoDai-1].x, A[DoDai-1].y);
        cout << " ";
    }

    void DiChuyen(int Huong) {
        XoaDuoi();
        for (int i = DoDai - 1; i > 0; i--)
            A[i] = A[i - 1];
        if (Huong == 0) A[0].x += 1;
        if (Huong == 1) A[0].y += 1;
        if (Huong == 2) A[0].x -= 1;
        if (Huong == 3) A[0].y -= 1;
    }

    void ThemDoDai() {
        DoDai++;
    }
};
