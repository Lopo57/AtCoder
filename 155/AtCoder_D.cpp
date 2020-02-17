//https://atcoder.jp/contests/abc155/tasks/abc155_d
//timeout

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <map>
#include <algorithm>

using namespace std;

int main ()
{
    
    long long N, K;
    cin >> N >> K;

    vector <long long> vecIn(N);
    vector <long long> vecNums;
    map <long long, long long> mapDup;

    //入力
    for (int i = 0; i < N; ++i)
    {
        cin >> vecIn.at(i);
    }

    //組み合わせ算出
    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            vecNums.push_back(vecIn.at(i) * vecIn.at(j));
        }
    }

    sort(vecNums.begin(), vecNums.end());

    cout << vecNums.at(K - 1) << endl;

    
    return 0;
}