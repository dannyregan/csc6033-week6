#include <iostream>
#include <string>

using namespace std;

string sumUnary(int arr[]) {
    // Convert unary numbers to a string
    string prob = to_string(arr[0]) + '+' + to_string(arr[1]);

    // Compute sum
    for (int i = 0; i < prob.length(); i++) {
        if (prob[i] == '+') { // Replace '+' with a '1'
            prob[i] = '1';
        }
        if (i == (prob.length() - 1)) { // Erase the last character
            prob.erase(prob.begin() + i);
        }
    }

    return prob;
}

int main() {
    // Unary numbers to be summed
    int nums1[2] = {11, 111};
    int nums2[2] = {11111, 1};
    int nums3[2] = {11111, 111111};

    // Calculate sums
    string res1 = sumUnary(nums1);
    string res2 = sumUnary(nums2);
    string res3 = sumUnary(nums3);

    // Print results
    cout << nums1[0] << " + " << nums1[1] << " = " << res1 << endl;
    cout << nums2[0] << " + " << nums2[1] << " = " << res2 << endl;
    cout << nums3[0] << " + " << nums3[1] << " = " << res3 << endl;

    return 0;
}