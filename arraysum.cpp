#include <iostream>
using namespace std;


/*
Algorithms problem 1, sum up the array.
*/
int main() {
    int e{0}; 
    cin >> e;
    int arr[e]{};
    int sum{0};
    for (int i = 0; i < e; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    // for (int i = 0; i < e; i++){
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < e; i++){
    //     sum = sum + arr[i];
    // }
    // cout << (sum);
    return EXIT_SUCCESS;
}
