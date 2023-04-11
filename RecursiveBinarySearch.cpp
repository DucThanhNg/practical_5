#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch::binarySearch(std::vector<int> list, int element, int startingP, int endingP){
    int middleP = (startingP + endingP) / 2;
    
    if (startingP >= endingP){
        return -1;
    }

    if (element == list[middleP]){
        return middleP;
    }

    else if (element < list[middleP]){
        return binarySearch(list, element, startingP, middleP-1);
    }

    else if (element > list[middleP]){
        return binarySearch(list, element, middleP+1, endingP);
    }

    return 0;
}

bool RecursiveBinarySearch::search(std::vector<int> list, int element){
    return binarySearch(list, element, 0, list.size()-1) != -1;
}