//tinh tong 1 so nguyen
int tinhTongChuSo(int n) {
    if (n < 0) n = -n; 

    int tong = 0;
    while (n > 0) {
        tong += n % 10; 
        n /= 10;         
    }
    return tong;
}

//tinh uoc trung lon nhat 2 so nguyen
int timUCLN(int a, int b) {
    if (a < 0) a = -a; // x? lý s? âm
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//tinh boi trung nho nhat 2 so nguyen
int timBCNN(int a, int b) {
    int ucln = timUCLN(a, b);
    return (a * b) / ucln;
}

//tinh ham  S = x^y
double tinhLuyThua(int x, int y) {
    double ketQua = 1;
    for (int i = 0; i < y; i++) {
        ketQua *= x;
    }
    return ketQua;
}


