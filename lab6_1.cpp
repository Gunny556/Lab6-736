#include<iostream>
using namespace std;

int main() {
    int num;
    int even_count = 0;
    int odd_count = 0;

    do {
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0) break;    // หยุดรับข้อมูลถ้า user ใส่ 0
        if (num % 2 == 0)
            even_count++;
        else
            odd_count++;
    } while (true);

    cout << "#Even numbers = " << even_count << endl;
    cout << "#Odd numbers = " << odd_count << endl;
    return 0;
}