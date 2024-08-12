#include <vector>

int smth(std::vector<int>& AVec, int low, int high)
{
    int pivot = AVec[high];  
    int i = low - 1; 

    for (int j = low; j < high; ++j) {
        if (AVec[j] <= pivot) {
            i++;
            std::swap(AVec[i], AVec[j]);  
        }
    }
    std::swap(AVec[i + 1], AVec[high]);  
    return i + 1;  
}

void QuickSort(std::vector<int>& AVec, int low, int high)
{
    if (low < high) {
        int pi = smth(AVec, low, high);

        QuickSort(AVec, low, pi - 1);
        QuickSort(AVec, pi + 1, high);
    }
}
