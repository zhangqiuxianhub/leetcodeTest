#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <atomic>
#include <memory>


using namespace std;
/*
3
4 1 3
4
3 2 50 3
�����6

3
1 49 5
1
100
�����0
*/

class Solution {
public:
    // ��ʵ�ֺ������ڴ˺���������������;
    int FindMaxDeliveryExpress(const vector<int>& packs, const vector<int>& goods)
    {
        int sum = 0;
        sort(packs.rbegin(), packs.rend());
        sort(goods.rbegin(), goods.rend());
        return sum;
    }
};

void printVector(const vector<int>& vec) {
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << ",";
    }
}

// ����Ϊ�������������ܣ��˲��ִ��벻����Ķ�
inline int ReadInt()
{
    int number;
    std::cin >> number;
    return number;
}

inline std::vector<int> ReadVector(int size)
{
    std::vector<int> numbers(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }
    return numbers;
}

//int main()
//{
//    //int packsCount = ReadInt();
//    // vector<int> packs = ReadVector(packsCount);
//    // int goodsCount = ReadInt();
//    // vector<int> goods = ReadVector(goodsCount);
//
//    int packsCount = 3;
//    vector<int> packs = { 4,1,3 };
//    int goodsCount = 4;
//    vector<int> goods = { 3,2,5,0,3 };
//
//    Solution solu;
//    std::cout << solu.FindMaxDeliveryExpress(packs, goods);
//
//    return 0;
//}

//////////////////////////////////////////////////////////////////




