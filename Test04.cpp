#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Nhập số thứ nhất từ người dùng
    cout << "Nhap so thu nhat: ";
    cin >> num1;
    
    // Nhập số thứ hai từ người dùng
    cout << "Nhap so thu hai: ";
    cin >> num2;
    
    // Tính tổng
    int sum = num1 + num2;
    
    // Hiển thị kết quả
    cout << "Tong cua hai so la: " << sum << endl;
    
    return 0;
}
