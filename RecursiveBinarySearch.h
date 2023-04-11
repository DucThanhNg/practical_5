#ifndef RECURSIVEBINARYSEARCH
#define RECURSIVEBINARYSEARCH
#include <vector>

class RecursiveBinarySearch{
    private:
        int binarySearch(std::vector<int> list, int element, int startingP, int endingP);
    public:
        bool search(std::vector<int> list, int element);

};

#endif