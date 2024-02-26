#include <iostream>
using namespace std;


int tinhtong(int so1, int so2) {
    // int sotong= so1+so2;
    // return sotong;
    return so1 + so2;
}
int tinhhieu(int so1, int so2) {
    // int sotong= so1+so2;
    // return sotong;
    return so1 - so2;
}
int tinhthuong(int so1, int so2) {
    // int sotong= so1+so2;
    // return sotong;
    return so1 / so2;
}
int tinhtich(int so1, int so2) {
    // int sotong= so1+so2;
    // return sotong;
    return so1 * so2;
}
        int main() {
        // KHai báo biến
        int so1, so2, tong;

        // nhập dữ liệu vào biến
        cout << "CHUONG TRINH TINH TONG 2 so\n";
        cout << "Nhap so thu nhat:";
        cin >> so1;
        cout << "Nhap so thu hai:";
        cin >> so2;
    // Tinh toán
    tong = tinhtong(so1, so2);
    // Xuất dữ liệu
    cout << so1 << "+" << so2 << "=" << tong << endl;
   
    // Tinh toán
    tong = tinhhieu(so1, so2);
    // Xuất dữ liệu
    cout << so1 << "-" << so2 << "=" << tong << endl;

    // Tinh toán
    tong = tinhthuong(so1, so2);
    // Xuất dữ liệu
    cout << so1 << "/" << so2 << "=" << tong << endl;
 
     // Tinh toán
    tong = tinhtich(so1, so2);
    // Xuất dữ liệu
    cout << so1 << "*" << so2 << "=" << tong << endl;
    return 0;
}