#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);

    int i = left, j = mid + 1, k = 0;
    // std::cout << arr[left] << " " <<  arr[right] << " " << mid << std::endl;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            std::cout << "here "  << arr[i] << std::endl;
            temp[k++] = arr[i++];
        }
        else {
            std::cout << "no here "  << arr[j] << std::endl;
            temp[k++] = arr[j++];
        }
         for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
        }
        cout << endl;
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = { 10, 7, 8, 9, 1, 11};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
