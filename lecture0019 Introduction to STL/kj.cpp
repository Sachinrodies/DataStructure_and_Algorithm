
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 4;

    auto it = lower_bound(arr, arr + n, target);
    if (it != arr + n && *it == target) {
        int index =distance(arr, it);
        cout << "Element found at index: " << index << std::endl;
    } else {
        cout << "Element not found" << std::endl;
    }
    

    return 0;
}
