/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2019. All rights reserved.
 * Description: �ϻ������֤
 * Note: ȱʡ��������ο��������о���ʹ�á��޸Ļ�ɾ��
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;


/*
2 4
755 769
398 399
3970001
756000000000002
600032
755100
�����
600032
3970001
======================
1 2
4 4
4000000
495555
�����
empty
*/

class Solution {
public:
    // ��ʵ�ֺ������ڴ˺���������������
    vector<string> GetRoamingArea(const vector<pair<string, string>>& restricts, const vector<string>& areas)
    {
        return vector<string>();
    }
};

// ����Ϊ�������������ܣ��˲��ִ��벻����Ķ�
inline string ReadLine()
{
    string line;
    getline(cin, line);
    return line;
}

inline vector<string> ReadLines(int size)
{
    vector<string> lines(size);
    for (int i = 0; i < size; ++i) {
        lines[i] = ReadLine();
    }
    return lines;
}

inline pair<string, string> SplitPair(const string& word, char delimeter)
{
    auto pos = word.find(delimeter);
    return make_pair(word.substr(0, pos), word.substr(pos + 1));
}

template<typename T>
inline void WriteVector(const vector<T>& objects, char delimeter = ' ')
{
    auto it = objects.begin();
    if (it == objects.end()) {
        return;
    }
    cout << *it;
    for (++it; it != objects.end(); ++it) {
        cout << delimeter << *it;
    }
}

//int main()
//{
//    pair<string, string> p = SplitPair(ReadLine(), ' ');
//    int m = stoi(p.first);
//    int n = stoi(p.second);
//    vector<string> rs = ReadLines(m);
//    vector<pair<string, string>> restricts;
//    for (auto s : rs) {
//        pair<string, string> p2 = SplitPair(s, ' ');
//        restricts.push_back(p2);
//    }
//    vector<string> areas = ReadLines(n);
//    Solution solu;
//    vector<string> out = solu.GetRoamingArea(restricts, areas);
//    WriteVector(out, '\n');
//    return 0;
//}
