#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int listSize = list.size();
    for(int i = 0; i < listSize; i++){
        for(int j = 0; j <(listSize - i - 1); j++){
            if (list[j] > list[j+1]){
                std::swap(list[j],list[j+1]);
            }
        }
    }
    return list;
}