#include<iostream>

using namespace std;
void selectionSort(int arr[],int N)
{
    for(int i=0;i<N-1;i++){
        int smallestindx=i;
    
    for(int j=i+1;j<N;j++)
{
    if (arr[j]<arr[smallestindx]){
        smallestindx=j;

    }

}
swap(arr[i],arr[smallestindx]);
    }
}

int main() {
    
  int arr[] = {64, 25, 12, 22, 11};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    cout << "original array";
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selectionSort(arr, N);
    
    cout << "After sort ";
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int k = 1; k < n; k++) {
//         int temp = arr[k];
//         int ptr = k - 1;

//         while (ptr >= 0 && temp < arr[ptr]) {
//             arr[ptr + 1] = arr[ptr];
//             ptr--;
//         }
        
//         arr[ptr + 1] = temp;
//     }
// }

// int main() {
//     int arr[] = {38, 27, 43, 3, 9, 82, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertionSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
