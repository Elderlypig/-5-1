#include <iostream>
#include <vector>
#include <algorithm>

void rearrangeArray(std::vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    int mid = 0;

    while (mid <= high) {
        if (arr[mid] < 0) {
            std::swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 0) {
            mid++;
        }
        else {
            std::swap(arr[mid], arr[high--]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    rearrangeArray(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

