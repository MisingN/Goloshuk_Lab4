#include <iostream>
using namespace std;

int main() {

    int arr[20];

    cout << "input 20 element:\n";

    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 20 - 1; i++) {

        for (int j = 0; j < 20 - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }

    }

    cout << "sorted massive:\n";

    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}