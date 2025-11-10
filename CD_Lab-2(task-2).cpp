#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "How many numbers do you want to enter? ";
    cin >> count;

    int arr[100];
    float total = 0;

    cout << "Please enter " << count << " numbers: ";
    for (int j = 0; j < count; j++) {
        cin >> arr[j];
        total += arr[j];
    }

    float average = total / count;

    cout << "The average value is: " << average << endl;

    return 0;
}
