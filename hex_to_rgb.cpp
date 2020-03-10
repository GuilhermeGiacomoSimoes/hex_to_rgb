//The goal is convert hex to rgb
//The entry should be something like: 0x054f77

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void hex_to_rgb(long hex);
int get_red (long hex);
int get_green(long hex);
int get_blue(long hex);

int main() {
    long hexadecimal;
    cout << "hex: ";
    //saving values hex in integer variable
    cin >> std::hex >> hexadecimal;

    hex_to_rgb(hexadecimal);
}

void hex_to_rgb(long hex){
    cout << "R: " << get_red(hex) << endl;
    cout << "G: " << get_green(hex) << endl;
    cout << "B: " << get_blue(hex) << endl;
}

int get_red (long hex){
    return hex >> 16 & 0xFF;
}

int get_green(long hex){
    return hex >> 8 & 0xFF;
}

int get_blue(long hex){
    return hex & 0xFF;
}

