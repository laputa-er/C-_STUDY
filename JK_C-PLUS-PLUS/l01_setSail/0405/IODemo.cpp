#include <iostream>
#include <stdlib.h>

using namespace std;

// 要求：用户输入一个整数，将该整数分别以8进制、10进制、16进制打印在屏幕上
// 要求：提示用户输入一个布尔值（0或1），以布尔方式将值打印在屏幕上

int main(void) {
    cout << "请输入一个整数：" << endl;
    int x = 0;
    cin >> x;

    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    cout << "请输入一个布尔值（0或1）：" << endl;
    bool y = false;
    cin >> y;
    
    cout << boolalpha << y << endl;

    return 0;
}