/*
Jared Williams
Chapter 16 part 2
*/

#include <iostream>

using namespace std;

template <typename T>
T half(T value) {
    return value / 2;
}

template <>
float half(float value) {
    return value / 2.0f;
}

template <>
double half(double value) {
    return value / 2.0;
}

int half(int value) {
    return (value + 1) / 2;                                     //rounds up integers
}

int main() {
    cout << "Half of 5 (int): " << half(5) << endl;
    cout << "Half of 5.0 (float): " << half(5.0f) << endl;
    cout << "Half of 5.0 (double): " << half(5.0) << endl;
    
    cin.ignore();
    cin.get();
    return 0;
}