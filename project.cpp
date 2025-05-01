#include <iostream>

using namespace std;

string convertToUnary(int n) {
    return string(n, '1');
}

int main() {
    int nums[2] = {2, 3};

    string n1 = "";
    string n2 = "";

    for (int i = 0; i < 2; i++) {
        string res = convertToUnary(nums[i]);
        i == 0 ? n1 = res : n2 = res;
    }
    cout << n1 << ' ' << n2 << endl;
    return 0;
}